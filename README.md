# oot3dhax_installer2
A second-degree hax installer for your 3DS

## Instructions
* Wipe your OoT3D saves (start from home menu, hold down ABXY). **The installer will not do this for you.**
* (Optional) Run `make clean all`, this will get the latest build, but it is not needed.
* Clone the repo and copy the folder within `3ds/` into your `sd:/3ds/`
* Open installer via a *hax. Make sure to select OoT3D as the target application. (If you don't see a target selection screen, exit and restart.) Follow the instructions.

3DS Firmwares that have local payloads:
* Old 3DS 9.9.0 (`POST5_U_20480_usa_9221`)
* New 3DS 9.9.0 (`N3DS_U_20480_usa_9221`)

## Troubleshooting
**eShop versus Gamecard is irrelevant**

Here are a few quick pointers:
* Check you have all the required files (especially the save0x files & `oot3dhax_installer.xml`) in the correct directory.
* Check that you have a working internet connection, since the installer downloads the payload from smea.
* If all else fails, try wiping the OoT3D save data. Again, the installer won't do this for you.

List of tested & working devices devices:
* 9.9 O3DS USA & JPN
* 9.9 N3DS EUR

## Quick overview
We already have all the pieces in place:
* smea's sploit_installer, which downloads ninjhax2 otherapp payloads
* yellows8's oot3dhax, which triggers and exploit in OoT3D

So it's just a matter of making it use OoT3D saves instead of IronFall saves. If you wanted to use regionFOUR or ninjhax1 payloads and fetch them either from a different URL or from the SD card, there's nothing stopping you as long as those payloads support otherapp (which the ironhax payloads do, since they're built for apps that aren't Cubic Ninja).