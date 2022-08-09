################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../atmega32_drivers/dio.c \
../atmega32_drivers/timer0.c 

OBJS += \
./atmega32_drivers/dio.o \
./atmega32_drivers/timer0.o 

C_DEPS += \
./atmega32_drivers/dio.d \
./atmega32_drivers/timer0.d 


# Each subdirectory must supply rules for building sources it contributes
atmega32_drivers/%.o: ../atmega32_drivers/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=12000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


