# JKSM Rosalina
JKSM Rosalina: rev.333

This is a fork from: Phalk/JKMS, originally forked from J-D-K/JKSM - JK's Save Manager This version's 3DSX is only compatible with the Rosalina entrypoint of the Homebrew Launcher. For the old *hax 3dsx please visit the original fork by JK.

WARNING: This fork moves the JKSV folder from the root of the sdcard to the "3ds/data/JKSM" folder. You must move your saves there before you are able to restore it.

Thanks to JK for the original JKSM 
Thanks to Phalk for porting it over to Rosalina/new-hbmenu 2.0 
Thanks to saibotu @Homebrew Discord #dev for helping to fix the makefile 
Thanks Naxann for 3ds_portlibs 
smealum for ctrulib
fincs for new-hbmenu/citro3d 
xerpi for 2f2d/sftd portlibs.

You will need to install the following portlibs from: https://github.com/Naxann/3ds_portlibs.git in order to build this from source:

zlib (install first) libpng (requires zlib) freetype (requires libpng) bzip2

You will also need to build and install the latest ctrulib: https://github.com/smealum/ctrulib.git 
next branch of citro3d: https://github.com/fincs/citro3d.git (git checkout next) 
xerpi's sf2d: https://github.com/xerpi/sf2dlib.git 
xerpi's sftd: https://github.com/xerpi/sftdlib.git
