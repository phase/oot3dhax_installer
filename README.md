# oot3dhax_installer2
A second-degree hax installer for your 3DS

## Instructions
* Wipe your OoT3D saves (start from home menu, hold down ABXY). **The installer will not do this for you.**
* (Optional) Run `make clean all`, this will get the latest build, but it is not needed.
* Clone the repo and copy the folder within `3ds/` into your `sd:/3ds/`
* Open installer via a *hax. Make sure to select OoT3D as the target application. (If you don't see a target selection screen, exit and restart.) Follow the instructions.

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

One optional item we would like:
* a quick modification that should let us load payload from SD card, not gamecard

This last one is necessary because OoT3D apparently isn't made of free save partition space, and can't hold both a ninjhax2 payload and more than one save file. ironhax apparently has a similar problem, since the ironhax installer does compress the payload before writing it to save data. However, if we can just load the payload from the SD card, this makes our lives easier. A few dozen kilobytes isn't much to ask from an SD card these days.