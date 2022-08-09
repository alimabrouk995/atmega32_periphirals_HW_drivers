################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include math_functions/subdir.mk
-include atmega32_drivers/subdir.mk
-include HW_drivers/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
FLASH_IMAGE += \
atmega32.hex \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: atmega32.elf secondary-outputs

# Tool invocations
atmega32.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,atmega32.map -mmcu=atmega32 -o "atmega32.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

atmega32.hex: atmega32.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex atmega32.elf  "atmega32.hex"
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: atmega32.elf
	@echo 'Invoking: AVRDude'
	G:\Engineering\Embedded Systems\IMT_SDK_Win_64\WinAVR\bin\avrdude -pm32 -Uflash:w:atmega32.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(S_UPPER_DEPS)$(C_DEPS) atmega32.elf
	-@echo ' '

secondary-outputs: $(FLASH_IMAGE) $(AVRDUDEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
