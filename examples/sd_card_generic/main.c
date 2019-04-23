#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "spi.h"
#include "sd.h"
#include "fat_filelib.h"

//-----------------------------------------------------------------
// main
//-----------------------------------------------------------------
int main(int argc, char *argv[])
{
    // Initialise SPI interface
    spi_init();

    // Initialise SD interface
    if (sd_init() < 0)
    {
        printf("ERROR: Cannot init SD card\n");
        return -1;
    }

    // Initialise File IO Library
    fl_init();

    // Attach media access functions to library
    if (fl_attach_media(sd_readsector, sd_writesector) != FAT_INIT_OK)
    {
        printf("ERROR: Failed to init file system\n");
        return -1;
    }
   
    // List the root directory
    fl_listdirectory("/");

    return 0;
}

