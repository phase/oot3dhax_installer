# ootsdhax_installer
Erm, can I use OoT3D instead of Ironfall? The answer is probably yes.

## Instructions:
* (Optional) Backup and then wipe your OoT3D saves (start from home menu, hold down ABXY). The installer will not do this for you.
* Put .smdh, .xml, .3dsx files in a ootsdhax_installer folder, along with the save0x.bin.* files (optionally just the one for your region).
* Open installer via tubehax or other *hax. Follow instructions.

## Quick overview
We already have all the pieces in place:
* smea's sploit_installer, which downloads ninjhax2 otherapp payloads
* smea's oot3dhax fork from yellows8, which works
So it's just a matter of making it use OoT3D saves instead of ironhax saves.

## TODO
One optional item we would like:
* a quick modification that should let us load payload from SD card, not gamecard

This last one is necessary because OoT3D apparently isn't made of free save partition space, and can't hold both a ninjhax2 payload and more than one save file. ironhax apparently has a similar problem, since the ironhax installer does compress the payload before writing it to save data. However, if we can just load the payload from the SD card, this makes our lives easier. A few dozen kilobytes isn't much to ask from an SD card these days.
