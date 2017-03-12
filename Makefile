ROOT = ..

GNU   := $(ROOT)/toolchain/gcc-arm-none-eabi-4_9-2014q4

CC    := $(GNU)/bin/arm-none-eabi-gcc
AS    := $(GNU)/bin/arm-none-eabi-gcc
LN    := $(GNU)/bin/arm-none-eabi-gcc
STRIP := $(GNU)/bin/arm-none-eabi-strip
HEX   := $(GNU)/bin/arm-none-eabi-objcopy -O ihex
BIN   := $(GNU)/bin/arm-none-eabi-objcopy -O binary

NRFUTIL := nrfutil


BLEDIR         := ./ble
CONFIGDIR      := ./config
FONTSDIR       := ./fonts
I18NDIR        := ./i18n
PAWNDIR        := ./pawn
SCREENSDIR     := ./screens
SPIFFSDIR      := ./spiffs

BUILDDIR       := build


TARGET_CHIP := NRF51822_QFAA_CA
BOARD       := BOARD_PCA10001
DEVICE      := NRF51
MCU         := cortex-m0
LD_FILE     := armgcc_s120_nrf51822_ossw_xxaa.ld

FIRMWARE_VERSION := FIRMWARE_VERSION=\"$(shell date +'%Y%m%d')-jc\"

CCOPTS   = -mcpu=$(MCU) -mthumb -std=gnu99 -mabi=aapcs -Os -mfloat-abi=soft
CCOPTS  += -fno-common -fmessage-length=0 -fno-exceptions -ffunction-sections -fdata-sections -fomit-frame-pointer
CCOPTS  += -Wall -Wshadow -Wstrict-aliasing -Wstrict-overflow -Wno-missing-field-initializers -Wno-unused-local-typedefs
CCOPTS  += -DBLE_DFU_APP_SUPPORT -DBLE_STACK_SUPPORT_REQD -DNDEBUG -D$(DEVICE) -D$(BOARD) -D$(TARGET_CHIP) -D$(FIRMWARE_VERSION)

ASOPTS   = -mcpu=$(MCU) -mthumb -x assembler-with-cpp -DNDEBUG -Os

LNLIBS   = -lm

LNOPTS   = -mcpu=$(MCU) -mthumb -mabi=aapcs -Wl,--gc-sections -Wl,-Map=$(BUILDDIR)/$(notdir $(CURDIR)).map --specs=nano.specs
LNOPTS  += -L$(CONFIGDIR) -T$(LD_FILE)


SRCS = $(wildcard $(BLEDIR)/*.c $(CONFIGDIR)/*.c $(CONFIGDIR)/*.s $(FONTSDIR)/*.c $(I18NDIR)/*.c $(PAWNDIR)/*.c $(SCREENSDIR)/*.c $(SPIFFSDIR)/*.c *.c)
INC += -I$(BLEDIR) -I$(CONFIGDIR) -I$(FONTSDIR) -I$(I18NDIR) -I$(PAWNDIR) -I$(SCREENSDIR) -I$(SPIFFSDIR)

SDK_PATH = $(ROOT)/nRF-SDK/components

# SDK files to build
SRCS += $(SDK_PATH)/drivers_nrf/twi_master/incubated/twi_sw_master.c
SRCS += $(SDK_PATH)/ble/common/ble_advdata.c
SRCS += $(SDK_PATH)/ble/common/ble_conn_params.c
SRCS += $(SDK_PATH)/softdevice/common/softdevice_handler/softdevice_handler.c
SRCS += $(SDK_PATH)/drivers_nrf/ble_flash/ble_flash.c
SRCS += $(SDK_PATH)/libraries/crc16/crc16.c
SRCS += $(SDK_PATH)/ble/common/ble_srv_common.c
SRCS += $(SDK_PATH)/ble/ble_db_discovery/ble_db_discovery.c
SRCS += $(SDK_PATH)/ble/ble_advertising/ble_advertising.c
SRCS += $(SDK_PATH)/ble/ble_services/ble_hrs/ble_hrs.c
SRCS += $(SDK_PATH)/ble/ble_services/ble_hrs_c/ble_hrs_c.c
SRCS += $(SDK_PATH)/ble/ble_services/ble_dis/ble_dis.c
SRCS += $(SDK_PATH)/ble/ble_services/ble_bas/ble_bas.c
SRCS += $(SDK_PATH)/ble/ble_services/ble_bas_c/ble_bas_c.c
SRCS += $(SDK_PATH)/ble/ble_services/ble_dfu/ble_dfu.c
SRCS += $(SDK_PATH)/drivers_nrf/hal/nrf_delay.c
SRCS += $(SDK_PATH)/drivers_nrf/hal/nrf_adc.c
SRCS += $(SDK_PATH)/drivers_nrf/gpiote/nrf_drv_gpiote.c
SRCS += $(SDK_PATH)/drivers_nrf/common/nrf_drv_common.c
SRCS += $(SDK_PATH)/drivers_nrf/pstorage/pstorage.c
SRCS += $(SDK_PATH)/ble/device_manager/device_manager_peripheral.c
SRCS += $(SDK_PATH)/libraries/bootloader_dfu/dfu_app_handler.c
SRCS += $(SDK_PATH)/libraries/bootloader_dfu/bootloader_util.c
SRCS += $(SDK_PATH)/libraries/util/app_error.c
SRCS += $(SDK_PATH)/libraries/fifo/app_fifo.c
SRCS += $(SDK_PATH)/libraries/timer/app_timer.c
SRCS += $(SDK_PATH)/libraries/trace/app_trace.c
SRCS += $(SDK_PATH)/drivers_nrf/uart/app_uart_fifo.c
SRCS += $(SDK_PATH)/libraries/scheduler/app_scheduler.c
SRCS += $(SDK_PATH)/libraries/util/app_util_platform.c

# SDK includes
INC += -I"$(SDK_PATH)/softdevice/s120/headers"
INC += -I"$(SDK_PATH)/softdevice/common/softdevice_handler"
INC += -I"$(SDK_PATH)/device"
INC += -I"$(SDK_PATH)/libraries/button"
INC += -I"$(SDK_PATH)/libraries/bootloader_dfu"
INC += -I"$(SDK_PATH)/libraries/trace"
INC += -I"$(SDK_PATH)/libraries/crc16"
INC += -I"$(SDK_PATH)/libraries/gpiote"
INC += -I"$(SDK_PATH)/libraries/timer"
INC += -I"$(SDK_PATH)/libraries/fifo"
INC += -I"$(SDK_PATH)/libraries/util"
INC += -I"$(SDK_PATH)/libraries/scheduler"
INC += -I"$(SDK_PATH)/ble/ble_advertising"
INC += -I"$(SDK_PATH)/ble/ble_services/ble_dis"
INC += -I"$(SDK_PATH)/ble/ble_services/ble_hrs"
INC += -I"$(SDK_PATH)/ble/ble_services/ble_hrs_c"
INC += -I"$(SDK_PATH)/ble/ble_services/ble_bas"
INC += -I"$(SDK_PATH)/ble/ble_services/ble_bas_c"
INC += -I"$(SDK_PATH)/ble/ble_services/ble_dfu"
INC += -I"$(SDK_PATH)/ble/ble_db_discovery"
INC += -I"$(SDK_PATH)/ble/common"
INC += -I"$(SDK_PATH)/ble/device_manager"
INC += -I"$(SDK_PATH)/drivers_nrf/common"
INC += -I"$(SDK_PATH)/drivers_nrf/ble_flash"
INC += -I"$(SDK_PATH)/drivers_nrf/pstorage"
INC += -I"$(SDK_PATH)/drivers_nrf/hal"
INC += -I"$(SDK_PATH)/drivers_nrf/gpiote"
INC += -I"$(SDK_PATH)/drivers_nrf/uart"
INC += -I"$(SDK_PATH)/drivers_nrf/twi_master/incubated"
INC += -I"$(SDK_PATH)/toolchain/gcc"
INC += -I"$(SDK_PATH)/toolchain"


OBJS = $(patsubst %, $(BUILDDIR)/%.o, $(notdir $(basename $(SRCS))))
COMMON_DEPS = $(patsubst %, $(BUILDDIR)/%.d, $(basename $(filter %.c, $(notdir $(SRCS)))))


all: $(BUILDDIR)/$(notdir $(CURDIR)).zip

-include $(COMMON_DEPS)

# Template for pattern rule for .c -> .o
define OC
$(BUILDDIR)/%.o: $1/%.c | $(BUILDDIR)
	@echo "[CC $$@]"
	@$(CC) $(CCOPTS) $(INC) $$< -c -o$$@
endef

# Template for pattern rule for dependencies .c -> .d
define DC
$(BUILDDIR)/%.d: $1/%.c | $(BUILDDIR)
	@echo "[DEP $$@]"
	@set -e; rm -f $$@; \
	$(CC) -MM -MP -MT $$(@:.d=.o) $(CCOPTS) $(INC) $$< > $$@
endef

# Use template OC and DC to generate the individual pattern rules
$(foreach d,$(sort $(dir $(SRCS))), $(eval $(call OC,$d)))
$(foreach d,$(sort $(dir $(SRCS))), $(eval $(call DC,$d)))

$(BUILDDIR)/%.o: $(CONFIGDIR)/%.s | $(BUILDDIR)
	@echo "[AS $@]"
	@$(AS) $(ASOPTS) $(INC) $< -c -o $@

$(BUILDDIR)/%.out: $(OBJS)
	@echo "[LD $@]"
	@$(LN) $(LNOPTS) -o $@ $^ $(LNLIBS)

$(BUILDDIR)/%.bin: $(BUILDDIR)/%.out
	@echo "[BIN $@]"
	@$(BIN) $< $(BINOPTS) $@

$(BUILDDIR)/%.hex: $(BUILDDIR)/%.out
	@echo "[HEX $@]"
	@$(HEX) $< $(BINOPTS) $@

$(BUILDDIR)/%.zip: $(BUILDDIR)/%.hex
	@echo "[NRFUTIL $@]"
	@$(NRFUTIL) dfu genpkg --application $< --application-version 0xffffffff --dev-revision 0xffff --dev-type 0xffff --sd-req 0xFFFE $@

clean:
	rm -rf $(BUILDDIR)

$(BUILDDIR):
	mkdir -p $@

.PHONY: all clean

.SECONDARY:
