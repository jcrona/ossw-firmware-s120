#include <stdbool.h>
#include <stdint.h>
#include "utils.h"


uint32_t simple_pow(uint32_t x, uint8_t n) {
	uint32_t result = 1;
	for(uint32_t i = 0; i < n; i++) {
		result *= x;
	}
	return result;
}
