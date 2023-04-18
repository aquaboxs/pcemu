/*
 *	PCEmu - x86_64/i386 Computer Emulator (of sort)
 *
 *	gtx650.cpp - GeForce GTX 650 Ti emulation (same as Sega Nu)
 *
 *	TODO list:
 *	---------------------------------------------------------------
 *	(-) hook up with riva/geforce regs in envytools source
 *	(-) need to boot up in emulation like windows 8.1/windows 10
 *	(-) what does envytools do?
 *	(-) too heavily to run seabios in gtx650.cpp on this code in geforce
 *
 *
 *	Authors: Aquabox
 */

/*
 * ___________________________________
 * |EVGA             GEFORCE GTX650Ti |
 * |____________________OOOOOOO_______|
 * |                   OO\ | /OO      |
 * |                   O--\|/--O      |
 *[|                   O  /|\  O      |
 *[|                    OOOOOOO       |
 * |__________________________________|
 * |            |_| |___________| |_|
 */

#define BIOS_GTX650_PATH "roms/video/nvidia/EVGA.GTX650Ti.1024.120919.rom"