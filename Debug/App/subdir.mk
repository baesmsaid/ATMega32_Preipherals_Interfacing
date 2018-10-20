################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/Lab_1.c \
../App/_Lab_2_SevSegments.c \
../App/_Lab_3_Keypad.c \
../App/_lab_04_SevSegmentsMux.c \
../App/app.c 

OBJS += \
./App/Lab_1.o \
./App/_Lab_2_SevSegments.o \
./App/_Lab_3_Keypad.o \
./App/_lab_04_SevSegmentsMux.o \
./App/app.o 

C_DEPS += \
./App/Lab_1.d \
./App/_Lab_2_SevSegments.d \
./App/_Lab_3_Keypad.d \
./App/_lab_04_SevSegmentsMux.d \
./App/app.d 


# Each subdirectory must supply rules for building sources it contributes
App/%.o: ../App/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


