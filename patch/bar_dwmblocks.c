static int statussig;
static int dwmblockssig;
pid_t statuspid = -1;
pid_t dwmblockspid = 0;

pid_t
getstatusbarpid()
{
	char buf[32], *str = buf, *c;
	FILE *fp;

	if (statuspid > 0) {
		snprintf(buf, sizeof(buf), "/proc/%u/cmdline", statuspid);
		if ((fp = fopen(buf, "r"))) {
			fgets(buf, sizeof(buf), fp);
			while ((c = strchr(str, '/')))
				str = c + 1;
			fclose(fp);
			if (!strcmp(str, STATUSBAR))
				return statuspid;
		}
	}
	if (!(fp = popen("pidof -s "STATUSBAR, "r")))
		return -1;
	fgets(buf, sizeof(buf), fp);
	pclose(fp);
	return strtol(buf, NULL, 10);
}

void
sigstatusbar(const Arg *arg)
{
	union sigval sv;

	if (!statussig)
		return;
	if ((statuspid = getstatusbarpid()) <= 0)
		return;

	#if BAR_DWMBLOCKS_SIGUSR1_PATCH
	sv.sival_int = (statussig << 8) | arg->i;
	if (sigqueue(statuspid, SIGUSR1, sv) == -1) {
		if (errno == ESRCH) {
			if (!getstatusbarpid())
				sigqueue(statuspid, SIGUSR1, sv);
		}
	}
	#else
	sv.sival_int = arg->i;
	sigqueue(statuspid, SIGRTMIN+statussig, sv);
	#endif // BAR_DWMBLOCKS_SIGUSR1_PATCH
}

// My thing from Luke
// I've done a lot of mess here, so 
// to clean up search for every variable
// below with telescope
int
getdwmblockspid()
{
	char buf[16];
	FILE *fp = popen("pidof -s dwmblocks", "r");
	fgets(buf, sizeof(buf), fp);
	pid_t pid = strtoul(buf, NULL, 10);
	pclose(fp);
	dwmblockspid = pid;
	return pid != 0 ? 0 : -1;
}

void
sigdwmblocks(const Arg *arg)
{
	union sigval sv;
	sv.sival_int = 0 | (dwmblockssig << 8) | arg->i;
	if (!dwmblockspid)
		if (getdwmblockspid() == -1)
			return;

	if (sigqueue(dwmblockspid, SIGUSR1, sv) == -1) {
		if (errno == ESRCH) {
			if (!getdwmblockspid())
				sigqueue(dwmblockspid, SIGUSR1, sv);
		}
	}
}
