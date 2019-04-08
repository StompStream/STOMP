
Debian
====================
This directory contains files used to package stompd/stomp-qt
for Debian-based Linux systems. If you compile stompd/stomp-qt yourself, there are some useful files here.

## stomp: URI support ##


stomp-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install stomp-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your stompqt binary to `/usr/bin`
and the `../../share/pixmaps/stomp128.png` to `/usr/share/pixmaps`

stomp-qt.protocol (KDE)

