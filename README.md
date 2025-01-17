# Key Bindings

Usage: `SUPER` + `<key sequence>`.

| Key sequence             | Description                                                    |
|--------------------------|----------------------------------------------------------------|
|`j`                       |  Focus next window                                             |
|`k`                       |  Focus previous window                                         |
|`J`                       |  Move focused window down the stack                            |
|`K`                       |  Move focused window up the stack                              |
|`ENTER`                   |  Make focused window master                                    |
|`h`                       |  Decrease master size                                          |
|`l`                       |  Increase master size                                          |
|`q`                       |  Close focused window                                          |
|`<NUM>`                   |  Toggle between previously selected tags and `<NUM>`           |
|`<NUM1>` + `<NUM2>`       |  Select multiple tags                                          |
|`CTRL` + `<NUM>`          |  Add tag `<NUM>` to focus (select multiple tags)               | 
|`SHIFT` + `<NUM>`         |  Move focused window to tag `<NUM>`                            |
|`CTRL` + `SHIFT` + `<NUM>`|  Show selected window on both current and `<NUM>` tags (toggle)|
|`TAB`                     |  Cycle forwards through layouts                                |
|`SHIFT` + `TAB`           |  Cycle backwards through layouts                               |
|`SHIFT` + `BACKSPACE`     |  Shutdown                                                      |
|`Q`                       |  Restart DWM                                                   |
|`R`                       |  Restart                                                       |
|`CTRL` + `f`              |  Fullscreen                                                    |
|`CTRL` + `t`              |  Tile layout                                                   |
|`CTRL` + `m`              |  Monocle layout                                                |
|`CTRL` + `b`              |  Bottom Stack layout                                           |
|`CTRL` + `c`              |  Centered Master layout                                        |
|`CTRL` + `d`              |  Deck layout                                                   |
|`CTRL` + `s`              |  Fibonacci (Spiral) layout                                     |
|`CTRL` + `g`              |  Grid layout                                                   |
|`CTRL` + `a`              |  Float layout                                                  |
|`m`                       |  Increment the number of masters                               |
|`M`                       |  Decrement the number of masters                               |
|`=`                       |  Increase gap size                                             |
|`-`                       |  Decrease gap size                                             |
|`SHIFT` + `=`             |  Default gap size                                              |
|`SHIFT` + `-`             |  Toggle gaps                                                   |
|`w`                       |  Increase window weight (size) in the stack                    |
|`W`                       |  Decrease window weight (size) in the stack                    |
|`CTRL` + `w`              |  Set window weight (size) to default                           |
|`t`                       |  Transfer focused window in the stack to master and vice versa |


# Useful Links                                                                

Browsing patches? There is a [map of patches](https://coggle.it/diagram/X9IiSSM6PTWOM9Wz) diagram which tries to organise patches into categories.


# List of All Patches:

   - [activetagindicatorbar](https://dwm.suckless.org/patches/activetagindicatorbar/)
      - this patch changes the rectangle indicating if a tag is used by a client into a bar above
        the tag name

   - [alpha](https://dwm.suckless.org/patches/alpha/)
      - adds transparency for the status bar

   - [alternativetags](https://dwm.suckless.org/patches/alternativetags/)
      - adds alternative tags which can be toggled on the fly for the sole purpose of providing
        visual aid

   - [alttagsdecoration](https://dwm.suckless.org/patches/alttagsdecoration/)
      - provides the ability to use alternative text for tags which contain at least one window

   - [alwayscenter](https://dwm.suckless.org/patches/alwayscenter/)
      - makes all floating windows centered, like the center patch, but without a rule

   - [~alwaysfullscreen~](https://dwm.suckless.org/patches/alwaysfullscreen/)
      - ~prevents the focus to drift from the active fullscreen client when using focusstack\(\)~

   - [anybar](https://dwm.suckless.org/patches/anybar/)
      - enables dwm to manage external status bars such as lemonbar and polybar
      - dwm treats the external bar as it would its own, so all regular dwm commands such as
        togglebar affect the external bar in the same way

   - [aspectresize](https://dwm.suckless.org/patches/aspectresize/)
      - allows windows to be resized with its aspect ratio remaining constant

   - [attachabove](https://dwm.suckless.org/patches/attachabove/)
      - new windows are placed above selected client

   - [attachaside](https://dwm.suckless.org/patches/attachaside/)
      - new windows are placed on top of the stack

   - [attachbelow](https://dwm.suckless.org/patches/attachbelow/)
      - new windows are placed below selected client

   - [attachbottom](https://dwm.suckless.org/patches/attachbottom/)
      - new windows are placed at the bottom of the stack

   - [autoresize](https://dwm.suckless.org/patches/autoresize/)
      - by default, windows that are not visible when requesting a resize/move will not get
        resized/moved, with this patch, however, they will

   - [autostart](https://dwm.suckless.org/patches/autostart/)
      - makes dwm run `~/.dwm/autostart_blocking.sh` and `~/.dwm/autostart.sh &` on startup

   - [awesomebar](https://dwm.suckless.org/patches/awesomebar/)
      - enhanced taskbar that allows focus / hiding / unhiding of windows by clicking on the status
        bar

   - [bar_border](https://codemadness.org/paste/dwm-border-bar.patch)
      - adds a border around the bar similarly to how client windows have borders

   - [bar_height](https://dwm.suckless.org/patches/bar_height/)
      - allows the bar height to be explicitly set rather than being derived from font

   - [barmodules](https://github.com/bakkeby/patches/wiki/barmodules/)
      - splits the dwm bar into modules allowing for re-arrangement of the bar and easier
        integration for new features

   - [barpadding](https://dwm.suckless.org/patches/barpadding/)
      - adds vertical and horizontal space between the statusbar and the edge of the screen

   - [bartabgroups](https://dwm.suckless.org/patches/bartabgroups/)
      - turns the titlebar area into a mfact-respecting tab-bar showing each client's title

   - [bidi](https://dwm.suckless.org/patches/bidi/)
      - adds proper support for Right-To-Left (RTL) languages (such as Farsi, Arabic or Hebrew)

   - [center](https://dwm.suckless.org/patches/center/)
      - adds an iscentered rule to automatically center clients on the current monitor

   - [cfacts](https://dwm.suckless.org/patches/cfacts/)
      - the cfacts patch provides the ability to assign different weights to clients in their
        respective stack in tiled layout

   - [clientindicators](https://dwm.suckless.org/patches/clientindicators/)
      - draws a dot indicator overlayed on each tag icon for each client
      - the selected client is drawn as a larger horizontal line

   - [cmdcustomize](https://dwm.suckless.org/patches/cmdcustomize/)
      - allows color attributes to be set through the command line

   - [colorbar](https://dwm.suckless.org/patches/colorbar/)
      - lets you change the foreground and background color of every statusbar element

   - color_emoji
      - enables color emoji in dmenu by removing a workaround for a BadLength error in the Xft
        library when color glyphs are used
      - enabling this will crash dwm on encountering such glyphs unless you also have an updated
        Xft library that can handle them

   - [combo](https://dwm.suckless.org/patches/combo/)
      - allows you to select multiple tags by pressing all the right keys as a combo, e.g. hold MOD
        and press and hold 1 and 3 together to view those two tags

   - [cool_autostart](https://dwm.suckless.org/patches/cool_autostart/)
      - allows dwm to execute commands from an array in the config.h file
      - when dwm exits all processes from the autostart array will be killed automatically

   - [cyclelayouts](https://dwm.suckless.org/patches/cyclelayouts/)
      - lets you cycle through all your layouts

   - [decoration_hints](https://dwm.suckless.org/patches/decoration_hints/)
      - make dwm respect \_MOTIF\_WM\_HINTS property, and not draw borders around windows
       requesting for it
      - some applications use this property to notify window managers to not draw window
        decorations
      - not respecting this property leads to issues with applications that draw their own borders,
        like chromium (with "Use system title bar and borders" turned off) or vlc in fullscreen mode

   - [distributetags](https://dwm.suckless.org/patches/reorganizetags/)
      - this reorganisetags variant re-distributes all clients on the current monitor evenly across
        all tags

   - [dmenumatchtop](https://dwm.suckless.org/patches/dmenumatchtop)
      - updates the position of dmenu to match that of the bar
      - i.e. if topbar is 0 then dmenu will appear at the bottom and if 1 then dmenu will appear at
        the top

   - [dragcfact](https://github.com/bakkeby/patches/wiki/dragcfact/)
      - lets you resize clients' size (i.e. modify cfact) by holding modkey + shift + right-click
        and dragging the mouse

   - [dragmfact](https://github.com/bakkeby/patches/wiki/dragmfact/)
      - lets you resize the split in layouts (i.e. modify mfact) by holding the modkey + shift
        + left-click and dragging the mouse
      - this is a bespoke patch that supports vertical and horizontal layout splits as well as
        centered master variants

   - [dwmblocks](https://gist.github.com/danbyl/54f7c1d57fc6507242a95b71c3d8fdea)
      - signal integration to use dwm with a patched [dwmblocks](https://github.com/torrinfail/dwmblocks)
      - combined with the statuscmd patch this gives a clickable statusbar

   - [dwmc](http://dwm.suckless.org/patches/dwmc/)
      - a simple dwmc client using a fork of fsignal to communicate with dwm

   - [emptyview](https://dwm.suckless.org/patches/emptyview/)
      - allows no tag at all to be selected
      - dwm will start with no tag selected and when a client with no tag rule is started and no
        tag is selected then it will be opened on the first tag

   - [ewmhtags](https://dwm.suckless.org/patches/ewmhtags/)
      - adds EWMH support for \_NET_NUMBER_OF_DESKTOPS, \_NET_CURRENT_DESKTOP, \_NET_DESKTOP_NAMES
        and \_NET_DESKTOP_VIEWPORT, which allows for compatibility with other bars and programs
        that request workspace information, e.g. polybar's xworkspaces module

   - [exresize](https://dwm.suckless.org/patches/exresize/)
      - this patch allows the user to change size and placement of floating windows using only the
        keyboard
      - it also allows for temporary vertical and horizontal extension of windows similar to other
        WMs fill command

   - [~extrabar~](https://dwm.suckless.org/patches/extrabar/)
      - ~enables an extra status bar in dwm in a similar manner to the dualstatus patch~
      - ~if the primary status is at the top via topbar then the extra status bar will be placed at
        the bottom and vice versa~

   - extrastatus
      - formerly extrabar - now only splits the status into to statuses by using a status separator

   - [fakefullscreen](https://dwm.suckless.org/patches/fakefullscreen/)
      - only allow clients to "fullscreen" into the space currently given to them
      - as an example, this will allow you to view a fullscreen video in your browser on one half
        of the screen, while having the other half available for other tasks

   - [fakefullscreenclient](https://github.com/bakkeby/patches/wiki/fakefullscreenclient/)
      - similarly to the fakefullscreen patch this patch only allows clients to "fullscreen" into
        the space currently given to them
      - as an example, this will allow you to view a fullscreen video in your browser on one half
        of the screen, while having the other half available for other tasks
      - the "twist" with this patch is that fake fullscreen can be toggled on a per client basis
        rather than applying to all clients globally

   - [fancybar](https://dwm.suckless.org/patches/fancybar/)
      - shows the titles of all visible windows in the status bar

   - flexwintitle
      - based on the bartabgroups patch, this is a layout aware barmodules module for handling
        window titles intended to be used with flextile-deluxe

   - [~floatbordercolor~](https://dwm.suckless.org/patches/float_border_color/)
      - ~this patch allows a different border color to be chosen for floating windows~

   - [floatpos](https://github.com/bakkeby/patches/wiki/floatpos/)
      - adds a float rule allowing the size and position of floating windows to be specified
      - control the size and position of floating windows similar to exresize, moveresize,
        moveplace patches
      - specify size and position using absolute, relative or fixed co-ordinates or
      - position floating windows in a grid-like manner

   - [focusadjacenttag](https://dwm.suckless.org/patches/focusadjacenttag/)
      - provides the ability to focus the tag on the immediate left or right of the currently
        focused tag
      - it also allows to send the focused window either on the left or the right tag

   - [focusdir](https://github.com/bakkeby/patches/wiki/focusdir)
      - allows focusing on clients based on direction (up, down, left, right) instead of client
        order

   - [focusmaster](https://dwm.suckless.org/patches/focusmaster/)
      - a simple patch that just puts focus back to the master client

   - [focusonclick](https://dwm.suckless.org/patches/focusonclick/)
      - this patch makes you switch focus only by mouse click and not sloppy (focus follows mouse
        pointer)

   - [focusonnetactive](https://dwm.suckless.org/patches/focusonnetactive/)
      - by default, dwm responds to \_NET_ACTIVE_WINDOW client messages by setting the urgency bit
        on the named window
      - this patch activates the window instead

   - [focusurgent](https://dwm.suckless.org/patches/focusurgent/)
      - adds a keyboard shortcut to select the next window having the urgent flag regardless of the
        tag it is on

   - [fsignal](https://dwm.suckless.org/patches/fsignal/)
      - send "fake signals" to dwm for handling, using xsetroot
      - this will not conflict with the status bar, which also is managed using xsetroot

   - [fullscreen](https://dwm.suckless.org/patches/fullscreen/)
      - applies the monocle layout with the focused client on top and hides the bar
      - when pressed again it shows the bar and restores the layout that was active before going
        fullscreen

   - [hidevacanttags](https://dwm.suckless.org/patches/hide_vacant_tags/)
      - prevents dwm from drawing tags with no clients (i.e. vacant) on the bar

   - [holdbar](http://dwm.suckless.org/patches/holdbar/)
      - with this patch dwm's built-in status bar is only shown when HOLDKEY is pressed
      - additionally the bar will now overlay the display

   - [ignore-xft-errors-when-drawing-text](https://groups.google.com/forum/m/#!topic/wmii/7bncCahYIww)
      - sometimes dwm crashes when it cannot render some glyphs in window titles (usually emoji)
      - this patch is essentially a hack to ignore any errors when drawing text on the status bar
        and may be removed if a more appropriate solution comes up

   - [inplacerotate](https://dwm.suckless.org/patches/inplacerotate/)
      - allows rotation of all clients in the master or stack area without affecting the other area

   - [insets](https://dwm.suckless.org/patches/insets/)
      - lets custom insets from each edge of the screen to be defined
      - an example use case would be to make space for an external bar

   - [ipc](https://github.com/mihirlad55/dwm-ipc)
      - implements inter-process communication through a UNIX socket for dwm
      - allows for the window manager to be queried for information, e.g. listen for events such as
        tag or layout changes, as well as send commands to control the window manager via other
        programs

   - [\_IS\_FLOATING](https://github.com/bakkeby/dwm-flexipatch/issues/50)
      - adds the \_IS\_FLOATING xproperty for floating windows
      - this can allow for a compositor to handle floating windows differently to tiled windows,
        e.g. only show shadows on floating windows
      - this patch is enabled via the ewmhtags patch

   - [ispermanent](https://dwm.suckless.org/patches/ispermanent/)
      - adds rule option for clients to avoid accidental termination by killclient for sticky
        windows

   - [keymodes](https://dwm.suckless.org/patches/keymodes/)
      - this patch adds key modes (like in vim or emacs) where chains of keyboard shortcuts can be
        performed

   - [killunsel](https://dwm.suckless.org/patches/killunsel/)
      - kills all visible clients that are not selected (only the selected client will remain)

   - [~leftlayout~](http://dwm.suckless.org/patches/leftlayout/)
      - ~moves the layout symbol in the status bar to the left hand side~

   - LG3D
      - changes the window manager name to "LG3d" instead of "dwm" as a workaround for Java
        applications that assume that the window manager is using window reparenting
      - refer to the ISSUES secton of the dwm man page for more details

   - [losefullscreen](https://github.com/bakkeby/patches/wiki/losefullscreen/)
      - by default in dwm it is possible to make an application fullscreen, then use the focusstack
        keybindings to focus on other windows beneath the current window
      - it is also possible to spawn new windows (e.g. a terminal) that end up getting focus while
        the previous window remains in fullscreen
      - this patch ensures that in such scenarios the previous window loses fullscreen

   - [maximize](https://dwm.suckless.org/patches/maximize/)
      - adds helper functions for maximizing, horizontally and vertically, floating windows using
        keybindings

   - [mpdcontrol](https://dwm.suckless.org/patches/mpdcontrol/)
      - adds keyboard bindings to control MDP (Music Player Daemon)

   - [monitorrules](https://github.com/bakkeby/patches/wiki/monitorrules/)
      - adds rules per monitor, e.g. have default layouts per monitor
      - the use case for this is if the second monitor is vertical (i.e. rotated) then you may want
        to use a different default layout for this monitor than what is used for the main monitor
        (for example normal vertical split for main monitor and horizontal split for the second)

   - [monoclesymbol](https://dwm.suckless.org/patches/monoclesymbol/)
      - always display the the monocle-symbol as defined in config.h if the monocle-layout is
        activated
      - do not display the number of open clients in the current tag

   - [moveresize](https://dwm.suckless.org/patches/moveresize/)
      - allows you to move and resize dwm's clients using keyboard bindings

   - [movestack](https://dwm.suckless.org/patches/movestack/)
      - allows you to move clients around in the stack and swap them with the master

   - [nametag](https://dwm.suckless.org/patches/nametag/)
      - allows the names of tags to be changed during runtime

   - [netclientliststacking](https://github.com/bakkeby/patches/wiki/netclientliststacking)
      - adds support for the \_NET\_CLIENT\_LIST\_STACKING atom, needed by certain applications
        like the Zoom video conferencing application

   - [noborder](https://dwm.suckless.org/patches/noborder/)
      - removes the border when there is only one window visible

   - [nodmenu](https://git.suckless.org/sites/commit/ed68e3629de4ef2ca2d3f8893a79fb570b4c0cbc.html)
      - enable modifying dmenu in config.def.h which resulted previously in a compilation error
        because two lines of code hardcode dmenu into dwm
      - allows complete removal of dmenu, should you want to do that
      - NB: this patch was removed from the patches listing on the suckless page due to it's simplicity

   - nomodbuttons
      - allows for toggleable client button bindings that have no modifiers
      - this can, for example, allow you to move or resize using the mouse alone without holding
        down a modifier key, which can be practical if you have extra buttons on your mouse

   - [no_transparent_borders](https://github.com/szatanjl/dwm/commit/1529909466206016f2101457bbf37c67195714c8)
      - when terminals have transparency then their borders also become transparent
      - this patch ensures that borders have no transparency
      - note that this patch is only relevant if you are not using the alpha patch

   - [on\_empty\_keys](https://github.com/bakkeby/dwm-flexipatch/issues/51)
      - port of InstantVM's on_empty_keys functionality allowing keybindings that apply only when a
        tag/view is empty
      - an example use case is being able to launch applications with first hand keys like "f" to
        launch firefox

   - [onlyquitonempty](https://dwm.suckless.org/patches/onlyquitonempty/)
      - makes it so dwm will only exit via quit() if no windows are open (in order to prevent
        accidental loss of work)

   - [pango](https://dwm.suckless.org/patches/pango/)
      - adds simple markup for status messages using pango markup

   - [pertag](https://dwm.suckless.org/patches/pertag/)
      - adds nmaster, mfact, layouts and more per tag rather than per monitor

   - [placemouse](https://github.com/bakkeby/patches/wiki/placemouse)
      - lets the user change the position of a client in the stack using the mouse.

   - [powerline](https://gitlab.com/udiboy1209-suckless/dwm/-/commit/071f5063e8ac4280666828179f92788d893eea40#4b1a539194be7467cefbda22f675a3b7c19ceca7)
      - adds drawing of powerline arrows (and diagonal lines) for both the status bar and the tags

   - [push](https://dwm.suckless.org/patches/push/)
      - this patch provides a way to move clients up and down inside the client list

   - [renamed_scratchpads](https://github.com/bakkeby/patches/wiki/renamedscratchpads)
      - variant of the [named scratchpads](https://dwm.suckless.org/patches/namedscratchpads/) patch

   - [reorganizetags](https://dwm.suckless.org/patches/reorganizetags/)
      - shifts all clients per tag to leftmost unoccupied tags
      - e.g. if clients A, B, C are tagged on tags 1, 5, 9 respectively, when reorganized they will
        now be on tag 1, 2, and 3

   - [resizecorners](https://dwm.suckless.org/patches/resizecorners/)
      - by default, windows only resize from the bottom right corner
      - with this patch the mouse is warped to the nearest corner and you resize from there

   - [resizepoint](https://github.com/bakkeby/patches/wiki/resizepoint/)
      - practically the same as resizecorners, but the cursor does not warp to any of the window
        corners

   - [restartsig](https://dwm.suckless.org/patches/restartsig/)
      - adds a keyboard shortcut to restart dwm or alternatively by using kill -HUP dwmpid
      - additionally dwm can quit cleanly by using kill -TERM dwmpid

   - [riodraw](https://github.com/bakkeby/patches/wiki/riodraw/)
      - adds rio-like drawing to spawn new windows or to resize the selected client (ported from
        instantWM)
      - depends on an external tool slop being installed

   - [rotatestack](https://dwm.suckless.org/patches/rotatestack/)
      - let's you rotate through the stack using keyboard shortcuts

   - [roundedcorners](https://github.com/mitchweaver/suckless/blob/master/dwm/patches/mitch-06-rounded_corners-f04cac6d6e39cd9e3fc4fae526e3d1e8df5e34b2.patch)
      - adds rounded corners to client windows

   - [savefloats](https://dwm.suckless.org/patches/save_floats/)
      - saves size and position of every floating window before it is forced into tiled mode
      - if the window is made floating again then the old dimensions will be restored

   - [scratchpad](https://dwm.suckless.org/patches/scratchpad/)
      - the scratchpad patch allows you to spawn or restore a floating terminal window

   - [scratchpad_alt_1](https://github.com/GasparVardanyan/dwm-scratchpad)
      - this alternative patch enables a scratchpad feature in dwm similar to the scratchpad
        feature in i3wm

   - seamless_restart
      - allows for selected layout, assigned tags, etc. to be persisted across restarts

   - [selfrestart](https://dwm.suckless.org/patches/selfrestart/)
      - restart dwm without the unnecessary dependency of an external script

   - [sendmon_keepfocus](https://github.com/bakkeby/patches/wiki/sendmon_keepfocus/)
      - minor patch that allow clients to keep focus when being sent to another monitor

   - [setborderpx](https://dwm.suckless.org/patches/setborderpx/)
      - this patch allows border pixels to be changed during runtime

   - [shift-tools](https://dwm.suckless.org/patches/shift-tools/)
      - a group of functions that shift clients or views left or right

   - [shiftview](https://github.com/chau-bao-long/dotfiles/blob/master/suckless/dwm/shiftview.diff)
      - adds keybindings for left and right circular shift through tags
      - also see focusadjacenttag

   - [shiftviewclients](https://github.com/bakkeby/patches/wiki/shiftviewclients/)
      - variant of the shiftview patch which skips tags that have no clients

   - [sizehints](https://dwm.suckless.org/patches/sizehints/)
      - makes dwm obey even "soft" sizehints for new clients

   - [sortscreens](https://www.mail-archive.com/hackers@suckless.org/msg09400.html)
      - this patch aims to address some inconsistencies when it comes to focusmon, tagmon and
        similar functionality by explicitly sorting screens left to right (or top to bottom in a
        vertical layout)

   - [spawn_cwd](https://dwm.suckless.org/patches/spawn_cwd/)
      - spawns programs from currently focused client's working directory

   - [stacker](https://dwm.suckless.org/patches/stacker/)
      - provides comprehensive utilities for managing the client stack

   - [staticstatus](https://dwm.suckless.org/patches/staticstatus/)
      - allows the status text to be fixed to the bar on a specific monitor rather than being
        drawn on the focused monitor

   - [status2d](https://dwm.suckless.org/patches/status2d/)
      - allows colors and rectangle drawing in the dwm status bar

   - [statusallmons](https://dwm.suckless.org/patches/statuspadding/)
      - this patch draws and updates the statusbar on all monitors

   - [statusbutton](https://dwm.suckless.org/patches/statusbutton/)
      - adds a clickable button to the left hand side of the statusbar

   - [statuscmd](https://dwm.suckless.org/patches/statuscmd/)
      - adds the ability to execute shell commands based on the mouse button and position when
        clicking the status bar

   - [statuscolors](https://dwm.suckless.org/patches/statuscolors/)
      - enables colored text in the status bar allowing multiple color combinations for use in the
        status script

   - [statuspadding](https://dwm.suckless.org/patches/statuspadding/)
      - adds configuration options for horizontal and vertical padding in the status bar

   - [steam](https://github.com/bakkeby/patches/wiki/steam)
      - a minor patch that works around the issue of floating Steam windows jumping around the
        screen when they receive focus

   - [sticky](https://dwm.suckless.org/patches/sticky/)
      - adds toggleable keyboard shortcut to make a client 'sticky', i.e. visible on all tags

   - [swallow](https://dwm.suckless.org/patches/swallow/)
      - this patch adds "window swallowing" to dwm as known from Plan 9's windowing system rio
      - clients marked with isterminal in config.h swallow a window opened by any child process,
        e.g. running xclock in a terminal
      - closing the xclock window restores the terminal window in the current position

   - [swapfocus](https://dwm.suckless.org/patches/swapfocus/)
      - this patch depends on the pertag patch and makes it possible to switch focus with a single
        shortcut (mod-s) instead of having to think if you should use mod-j or mod-k for reaching
        the previously used window

   - [swaptags](https://dwm.suckless.org/patches/swaptags/)
      - allows swapping the contents of the currently selected tag with another tag by using
        keyboard shortcuts

   - [switchcol](https://dwm.suckless.org/patches/switchcol/)
      - allows you to switch focus between the master and stack columns using a single keybinding

   - [switchtag](https://github.com/bakkeby/patches/wiki/switchtag/)
      - when an application opens on a specific tab this patch adds the option to also switch to
        that tag when the application starts
      - optionally, the previous view can also be restored when the client is closed

   - [systray](https://dwm.suckless.org/patches/systray/)
      - adds system tray in the status bar

   - [tab](https://dwm.suckless.org/patches/tab/)
      - transforms the monocle layout into a "tabbed" layout if more than one window is present on
        the monocle view
      - this is essentially just a specific bar
      - the patch has been added for demonstration purposes only and has limited compatibility with
        other patches
      - it will conflict space-wise with a second bar
      - note that fancybar, awesomebar, bartabgroups and similar patches make the tab patch
        redundant

   - [tagall](https://dwm.suckless.org/patches/tagall/)
      - adds keyboard shortcuts to move all (or only floating) windows from one tag to another

   - [tagallmon](https://github.com/bakkeby/patches/wiki/tagallmon/)
      - move all visible windows to an adjacent monitor

   - [tagintostack](https://dwm.suckless.org/patches/tagintostack/)
      - makes new clients attach into the stack area when you toggle a new tag into view
      - this means your master area will remain unchanged when toggling views

   - [taggrid](https://dwm.suckless.org/patches/taggrid/)
      - adds an option to place tags in rows like in many other window managers

   - [taglabels](https://dwm.suckless.org/patches/taglabels/)
      - shows tag + class of master client in the tags section of the bar

   - [tagmonfixfs](https://github.com/bakkeby/patches/wiki/tagmonfixfs/)
      - allows moving a fullscreen window to another monitor while remaining in fullscreen

   - [tagothermonitor](https://dwm.suckless.org/patches/tagothermonitor/)
      - adds functions and keybindings to tag a window to a desired tag on an adjacent monitor

   - [tagpreview](https://dwm.suckless.org/patches/tag-previews/)
      - shows a preview of a tag when hovering the tag icon using the mouse

   - [tagswapmon](https://github.com/bakkeby/patches/wiki/tagswapmon/)
      - swap all visible windows on one monitor with those of an adjacent monitor

   - [tapresize](https://dwm.suckless.org/patches/tapresize/)
      - allows resizing of windows using a touchpad
      - uses vertical and horizontal scroll events allowing you to use one-finger tap for moving
        windows and two-finger tap for resizing

   - [~titlecolor~](https://dwm.suckless.org/patches/titlecolor/)
      - ~adds a new color scheme used by the (selected) window title in the bar~

   - [togglefullscreen](https://github.com/bakkeby/patches/wiki/togglefullscreen/)
      - allows you to toggle fullscreen on and off using a single shortcut key

   - [toggletag](https://github.com/bakkeby/patches/wiki/toggletag)
      - toggle tags using the same keyboard shortcuts to view tags
      - e.g. hitting `MOD+4` lets you view tag 4 and hitting the keybinding a second time brings
        you back to where you were before

   - [togglelayout](https://github.com/bakkeby/patches/wiki/togglelayout)
      - toggle layout using the same keyboard shortcuts to set the layout
      - e.g. hitting `MOD+m` switches to monocle layout, hitting the same keybinding again brings
        you back to the previous layout

   - [transfer](https://dwm.suckless.org/patches/transfer/)
      - lets you transfer the currently focused client between the master and stack area while
        increasing or decreasing the master area (nmaster) accordingly

   - [transferall](https://dwm.suckless.org/patches/transfer/)
      - lets you transfer all clients between the master and stack area while increasing or
        decreasing the master area (nmaster) accordingly

   - [underlinetags](https://dwm.suckless.org/patches/underlinetags/)
      - underlines the selected tag, or optionally all tags

   - [unfloatvisible](https://dwm.suckless.org/patches/unfloatvisible/)
      - resets isfloating on any visible windows that have it set and optionally also applies a
        layout

   - [~urgentborder~](https://dwm.suckless.org/patches/urgentborder/)
      - ~this patch makes "urgent" windows have different colors~

   - [vanitygaps](https://github.com/bakkeby/patches/blob/master/dwm/dwm-vanitygaps-6.2.diff)
      - adds configurable gaps between windows differentiating between outer, inner, horizontal and
        vertical gaps

   - [viewontag](https://dwm.suckless.org/patches/viewontag/)
      - follow a window to the tag it is being moved to

   - [vtcolor](https://dwm.suckless.org/patches/vtcolors/)
      - this patch adds the ability for dwm to read colors from the linux virtual console
        essentially allowing you to use the same color scheme as your regular tty

   - [warp](https://dwm.suckless.org/patches/warp/)
      - warps the mouse cursor to the center of the currently focused window or screen when the
        mouse cursor is (a) on a different screen or (b) on top of a different window

   - [winicon](https://dwm.suckless.org/patches/winicon/)
      - adds the window icon next to the window title in the bar

   - [windowrolerule](https://github.com/bakkeby/patches/wiki/windowrolerule/)
      - sometimes a single application opens different windows depending on the task at hand and
        this is often reflected in the WM_WINDOW_ROLE(STRING) x property
      - this patch adds the role field to the rule configuration so that one can differentiate
        between, say, Firefox "browser" vs "Preferences" vs "Manager" or Google-chrome "browser"
        vs "pop-up".

   - [winview](http://dwm.suckless.org/patches/winview/)
      - allows switching the view to that of a given client from the all-window view (Mod-0) using
        a keyboard shortcut

   - [xkb](https://dwm.suckless.org/patches/xkb/)
      - remembers keyboard layout per client

   - [xrdb](http://dwm.suckless.org/patches/xrdb/)
      - allows dwm to read colors from xrdb (.Xresources) during runtime

   - [zoomfloating](https://www.reddit.com/r/suckless/comments/ie5fe3/zoomfloating_my_own_simple_original_patch/)
      - a simple patch that allows floating windows to be zoomed into the master stack position

   - [zoomswap](https://dwm.suckless.org/patches/zoomswap/)
      - allows a master and a stack window to swap places rather than every window on the screen
        changing position

### Layouts included:

   - [bstack](https://dwm.suckless.org/patches/bottomstack/)
      - bottomstack layout

   - [bstackhoriz](https://dwm.suckless.org/patches/bottomstack/)
      - bottomstack horizontal layout

   - [centeredmaster](https://dwm.suckless.org/patches/centeredmaster/)
      - centeredmaster layout

   - [centeredfloatingmaster](https://dwm.suckless.org/patches/centeredmaster/)
      - centeredfloatingmaster layout

   - [columns](https://dwm.suckless.org/patches/columns/)
      - same as the default tile layout except clients in the master area are arranged in columns
        (i.e. left to right)

   - [deck](https://dwm.suckless.org/patches/deck/)
      - deck layout - clients in the stack area are arranged on top of each other (like monocle)

   - [fibonacci](https://dwm.suckless.org/patches/fibonacci/)
      - fibonacci (dwindle and spiral) layouts

   - [flextile-deluxe](https://github.com/bakkeby/patches/wiki/flextile-deluxe/)
      - a re-envisioned, flexible and over-the-top version of the original
        [flextile](https://dwm.suckless.org/patches/flextile/) patch supporting
         - multiple split layouts (horizontal, vertical, centered, floating, fixed)
         - tile arrangement on a per split basis (stack horizontally, stack vertically, grids,
           fibonacci)
         - pertag, cfacts, rmaster, vanitygaps compatibility
         - tile, deck, monocle, centeredmaster, bstack, bstackhoriz, gapplessgrid and more
      - this gives you a lot of versatility in terms of layout

   - [gapplessgrid](https://dwm.suckless.org/patches/gaplessgrid/)
      - gappless grid layout

   - [gridmode](https://dwm.suckless.org/patches/gridmode/)
      - gridmode (grid) layout

   - [horizgrid](https://dwm.suckless.org/patches/horizgrid/)
      - horizontal grid layout

   - [nrowgrid](https://dwm.suckless.org/patches/nrowgrid/)
      - nrowgrid layout, number of rows in grid controlled by nmaster
