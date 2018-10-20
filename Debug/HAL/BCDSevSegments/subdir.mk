################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/BCDSevSegments/BCDSevSegments.c 

OBJS += \
./HAL/BCDSevSegments/BCDSevSegments.o 

C_DEPS += \
./HAL/BCDSevSegments/BCDSevSegments.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/BCDSevSegments/%.o: ../HAL/BCDSevSegments/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


