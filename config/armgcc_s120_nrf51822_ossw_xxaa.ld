/* Linker script to configure memory regions. */

SEARCH_DIR(.)
GROUP(-lgcc -lc -lnosys)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x1d000, LENGTH = 0x1F000
  RAM (rwx) :  ORIGIN = 0x20002800, LENGTH = 0x1800
}

INCLUDE "gcc_nrf51_common.ld"
