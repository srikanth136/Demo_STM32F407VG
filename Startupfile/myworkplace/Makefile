CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS=-c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0 -I.
LDFLAGS=-mcpu=$(MACH) -mthumb -nostdlib -nostartfiles

TARGET=firmware.elf
OBJ=main.o led.o stubs.o

.PHONY: all clean

all: $(TARGET)
	@echo "╔════════════════════════════════════════════════════════════╗"
	@echo "║           ✓ BUILD SUCCESSFUL - FIRMWARE READY ✓            ║"
	@echo "╠════════════════════════════════════════════════════════════╣"
	@echo "║  Target:  $(TARGET)                                    ║"
	@echo "║  Size:    $$(ls -lh $(TARGET) | awk '{print $$5}')                                        ║"
	@echo "║  Status:  ✅ All files compiled and linked successfully     ║"
	@echo "║  Ready:   🚀 Deploy to STM32F407VG microcontroller        ║"
	@echo "╚════════════════════════════════════════════════════════════╝"

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

main.o: main.c main.h
	$(CC) $(CFLAGS) -o $@ $<

led.o: led.c led.h
	$(CC) $(CFLAGS) -o $@ $<

stubs.o: stubs.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET)

