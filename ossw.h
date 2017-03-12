#ifndef OSSW_H
#define OSSW_H

#include <stdbool.h>
#include <stdint.h>

#ifndef FIRMWARE_VERSION
#define FIRMWARE_VERSION     "nodate-jc" /* Default firmware version. */
#endif

const char* ossw_firmware_version(void);
const char* ossw_mac_address(void);
	
#endif /* OSSW_H */
