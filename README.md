# ossw-firmware-s120
OSSW firmware for S120 2.0.0 softdevice

This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

## Notes on jcrona/ossw-firmware-s120
The goal of this branch is to be able to build the **ossw-firmware** using **GCC** and **MAKE**.

To do so, you need:
   - the nRF51 SDK from Nordic **version 9.0.0** (path to it in the *Makefile*) -> https://developer.nordicsemi.com/nRF5_SDK/
   - the nrfutil python tool **version 0.5.2**-> https://github.com/NordicSemiconductor/pc-nrfutil
   - the Gnu GCC toolchain for ARM Cortex-M0 (path also in the *Makefile*, **gcc-arm-none-eabi-4_9-2014q4** is known to produce a code that fits in the watch, but you can experiment with different versions) -> https://developer.arm.com/open-source/gnu-toolchain/gnu-rm (or https://launchpad.net/gcc-arm-embedded/+download for older releases)

