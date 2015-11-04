# oot3dhax_installer
## a second-degree hax installer for your 3DS
Use it from an already-hacked 3DS to create a homebrew entrypoint either on a different 3DS or on the same 3DS, which you may want because it's faster/more convenient/just plain neat to have.

## Instructions
* Wipe your OoT3D saves (start from home menu, hold down ABXY), ideally after backing them up from svdt or save_manager. **The installer will not do any of this for you.**
* (Optional) Run `make clean all`, this will get the latest build, but it is not needed.
* Clone the repo and copy the folder within `3ds/` into your `sd:/3ds/`.

![gif of installation onto sd card](http://i.imgur.com/IBOfyUV.gif)

* Open installer via a *hax. Make sure to select OoT3D as the target application. (If you don't see a target selection screen, exit and restart.) Follow the instructions.

## Troubleshooting
**eShop versus gamecard is irrelevant.**

Here are a few quick pointers:
* Check that you have all the required files (especially the save0x files & `oot3dhax_installer.xml`) in the correct directory.
* Check that you have a working internet connection, since the installer downloads the payload from the internet.
* Check that you chose the correct system version in the installer.
* If all else fails, try wiping the OoT3D save data. Again, the installer won't do this for you.
