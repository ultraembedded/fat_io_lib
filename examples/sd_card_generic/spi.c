#include "spi.h"

//-----------------------------------------------------------------
// spi_init: Initialise SPI master
//-----------------------------------------------------------------
void spi_init(void)           
{         
    #error "Fill in SPI controller implementation"
}
//-----------------------------------------------------------------
// spi_cs: Set chip select
//-----------------------------------------------------------------
void spi_cs(uint32_t value)
{
    #error "Fill in SPI controller implementation"
}
//-----------------------------------------------------------------
// spi_sendrecv: Send or receive a character
//-----------------------------------------------------------------
uint8_t spi_sendrecv(uint8_t data)
{
    #error "Fill in SPI controller implementation"
    // 1. Write data to SPI Tx FIFO
    // 2. Wait for Tx complete
    // 3. Read SPI Rx FIFO and return
}
//-----------------------------------------------------------------
// spi_readblock: Read a block of data from a device
//-----------------------------------------------------------------
void spi_readblock(uint8_t *ptr, int length)
{
    int i;

    for (i=0;i<length;i++)
        *ptr++ = spi_sendrecv(0xFF);
}
//-----------------------------------------------------------------
// spi_writeblock: Write a block of data to a device
//-----------------------------------------------------------------
void spi_writeblock(uint8_t *ptr, int length)
{
    int i;

    for (i=0;i<length;i++)
        spi_sendrecv(*ptr++);
}
