### FAT16/32 File System Library

Github:   [http://github.com/ultraembedded/fat_io_lib](https://github.com/ultraembedded/fat_io_lib)

#### Intro

Designed for low memory embedded systems back in 2003, this project is a multi-purpose platform independent C code implementation of a FAT16 & FAT32 driver with read & write support.

The library provides stdio like interface functions such as fopen(), fgetc(), fputc(), fread(), fwrite() etc, allowing existing applications to be ported easily using a familiar API.  
The project is aimed at applications which require file system support such as MP3 players, data loggers, etc and has a low memory footprint with customizable build options to enable it to run on platforms such as the Atmel AVR, ARM & PIC microcontrollers.

The source code is available for free under GPL license, or alternatively, with a commercial compatible license for a small donation.

This library has been used in many open source projects including;
* Aleph - Open source sound computer.
* IV:MP - Grand Theft Auto: IV multiplayer game mod.
* hxcfloppyemu - HxC Floppy Drive Emulator.

#### Features

* Standard file I/O API (fopen(), fread(), fwrite(), etc)
* FAT16/FAT32 support (read + write)
* Long filename support (optional)
* Format function (optional)
* Directory listing (optional)
* Buffering & caching for higher performance (optional)

#### API

The following file IO API is provided:

* fopen
* fclose
* fread
* fwrite
* fputc
* fputs
* fgetc
* fflush
* fgetpos
* fseek
* ftell
* feof
* remove

Just add sector read & write functions for the media/platform you are using for a complete file system!

#### Testing

Each release of the project is tested using self verifying test benches to ensure validity and to protect against regressions (not currently released).

#### Commercial

If you would like to use this code in a commercial project with a closed source compatible license, please contact me.


#### History

* v2.6.11 - Fix compilation with GCC on 64-bit machines
* v2.6.10 - Added support for FAT32 format.
* v2.6.9 - Added support for time & date handling.
* v2.6.8 - Fixed error with FSINFO sector write.
* v2.6.7 - Added fgets(). Fixed C warnings, removed dependency on some string.h functions.
* v2.6.6 - Massive read + write performance  improvements.
* v2.6.5 - Bug fixes for big endian systems.
* v2.6.4 - Further bug fixes and performance improvements for write operations.
* v2.6.3 - Performance improvements, FAT16 formatting support. Various bug fixes
* v2.6 - Basic support for FAT16 added
* v2.5 - Code cleaned up. Many bugs fixed. Thread safety functions added.
* v2.x - Write support added as well as better stdio like API.
* v1.0 - Rewrite of all code to enable multiple files to be opened and provides a better file API.
* v0.1b - fopen(), fgetc(), fopenDIR() using new software stack for IDE drives and FAT32 access.
* v0.1a - First release; fopen(), fgetc() unbuffered reads.... (27/12/03)