PROJECT = nomagic_probe

# tools
CP = arm-none-eabi-objcopy
CC = arm-none-eabi-gcc
LD = arm-none-eabi-gcc
SIZE = size
MKDIR_P = mkdir -p
HEX = $(CP) -O ihex
BIN = $(CP) -O binary -S
DIS = $(CP) -S
OBJDUMP = arm-none-eabi-objdump

BIN_FOLDER = bin/
SRC_FOLDER = src/

SOURCE_DIR = $(dir $(lastword $(MAKEFILE_LIST)))

LKR_SCRIPT = $(SRC_FOLDER)hal/RP2040.ld


CFLAGS  = -c -O3 -g3 -std=c17 -mcpu=cortex-m0plus -mthumb -ffreestanding -funsigned-char -fno-short-enums
CFLAGS += -Wall  -Wextra -pedantic -Wshadow -Wdouble-promotion -Wconversion -Wpadded 
CFLAGS += -ffunction-sections -fdata-sections

LFLAGS  = -ffreestanding -nostdlib -nolibc -nodefaultlibs -nostartfiles -specs=nosys.specs
LFLAGS += -Wl,--gc-sections,-Map=$(BIN_FOLDER)app.map -g 
LFLAGS += -fno-common  -T$(LKR_SCRIPT)


SRC += $(SRC_FOLDER)hal/debug_uart.c
SRC += $(SRC_FOLDER)hal/startup.c
SRC += $(SRC_FOLDER)cli/cli.c
SRC += $(SRC_FOLDER)cli/cli_sys.c
SRC += $(SRC_FOLDER)lib/printf.c
SRC += $(SRC_FOLDER)lib/strlen.c
SRC += $(SRC_FOLDER)lib/strncmp.c
SRC += $(SRC_FOLDER)lib/memset.c
SRC += $(SRC_FOLDER)lib/memcpy.c

SRC += $(SRC_FOLDER)tinyusb/usb.c
SRC += $(SRC_FOLDER)tinyusb/usb_descriptors.c

SRC += $(SRC_FOLDER)tinyusb/src/tusb.c
SRC += $(SRC_FOLDER)tinyusb/src/device/usbd.c
SRC += $(SRC_FOLDER)tinyusb/src/device/usbd_control.c
SRC += $(SRC_FOLDER)tinyusb/src/class/cdc/cdc_device.c
SRC += $(SRC_FOLDER)tinyusb/src/common/tusb_fifo.c

SRC += $(SRC_FOLDER)time.c
SRC += $(SRC_FOLDER)main.c

OBJS = $(addprefix $(BIN_FOLDER),$(SRC:.c=.o))

INCDIRS +=$(SRC_FOLDER)
INCDIRS +=$(SRC_FOLDER)cfg/
INCDIRS +=$(SRC_FOLDER)tinyusb/src/
INCDIR = $(patsubst %,-I%, $(INCDIRS))

# make config
VPATH = $(SOURCE_DIR)
.DEFAULT_GOAL = all


# targets

$(BIN_FOLDER)$(PROJECT).elf: $(OBJS)
	@echo ""
	@echo "linking"
	@echo "======="
	$(LD) $(LFLAGS) -o $(BIN_FOLDER)$(PROJECT).elf $(OBJS)

%hex: %elf
	$(HEX) $< $@

%bin: %elf
	$(BIN) $< $@

%txt: %elf
	$(DIS) $< $@ > $@

flash: $(BIN_FOLDER)$(PROJECT).elf
	openocd  -f interface/cmsis-dap.cfg -f target/rp2040.cfg -c "program $(BIN_FOLDER)$(PROJECT).elf verify reset exit"

$(BIN_FOLDER)$(PROJECT).uf2: $(BIN_FOLDER)$(PROJECT).elf
	elf2uf2 -f 0xe48bff56 -p 256 -i $(BIN_FOLDER)$(PROJECT).elf

all: $(BIN_FOLDER)$(PROJECT).uf2
	@echo ""
	@echo "size"
	@echo "===="
	$(SIZE) $(BIN_FOLDER)$(PROJECT).elf

	
$(BIN_FOLDER)%o: %c
	@echo "=== compiling $@"
	@$(MKDIR_P) $(@D)
	$(CC) -c $(CFLAGS) $(INCDIR) $< -o $@

list:
	@echo " READ -> $(BIN_FOLDER)$(PROJECT).rd"
	@arm-none-eabi-readelf -Wall $(BIN_FOLDER)$(PROJECT).elf > $(BIN_FOLDER)$(PROJECT).rd
	@echo " LIST -> $(BIN_FOLDER)$(PROJECT).lst"
	@$(OBJDUMP) -axdDSstr $(BIN_FOLDER)$(PROJECT).elf > $(BIN_FOLDER)$(PROJECT).lst
	#$(OBJDUMP) -h -S -z $< > $@

doc:
	doxygen

clean:
	@rm -rf $(BIN_FOLDER) app.map doc/doxygen/

.PHONY: clean flash all list

