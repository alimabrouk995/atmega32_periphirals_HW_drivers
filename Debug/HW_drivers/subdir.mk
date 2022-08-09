################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HW_drivers/LCD.c \
../HW_drivers/keypad_16.c \
../HW_drivers/ssd.c \
../HW_drivers/ssd.c.c 

OBJS += \
./HW_drivers/LCD.o \
./HW_drivers/keypad_16.o \
./HW_drivers/ssd.o \
./HW_drivers/ssd.c.o 

C_DEPS += \
./HW_drivers/LCD.d \
./HW_drivers/keypad_16.d \
./HW_drivers/ssd.d \
./HW_drivers/ssd.c.d 


# Each subdirectory must supply rules for building sources it contributes
HW_drivers/%.o: ../HW_drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=12000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


