################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../App/_Lab_01_DIO.c \
../App/_Lab_02_SevSegments.c \
../App/_Lab_04_Keypad.c \
../App/_Lab_05_LCD.c \
../App/_Lab_07_ADC.c \
../App/_Lab_08_EXTI.c \
../App/_Lab_09_UART.c \
../App/_Lab_10_TIMER0.c \
../App/_Lab_11_Scheduler.c \
../App/_lab_03_SevSegmentsMux.c 

OBJS += \
./App/_Lab_01_DIO.o \
./App/_Lab_02_SevSegments.o \
./App/_Lab_04_Keypad.o \
./App/_Lab_05_LCD.o \
./App/_Lab_07_ADC.o \
./App/_Lab_08_EXTI.o \
./App/_Lab_09_UART.o \
./App/_Lab_10_TIMER0.o \
./App/_Lab_11_Scheduler.o \
./App/_lab_03_SevSegmentsMux.o 

C_DEPS += \
./App/_Lab_01_DIO.d \
./App/_Lab_02_SevSegments.d \
./App/_Lab_04_Keypad.d \
./App/_Lab_05_LCD.d \
./App/_Lab_07_ADC.d \
./App/_Lab_08_EXTI.d \
./App/_Lab_09_UART.d \
./App/_Lab_10_TIMER0.d \
./App/_Lab_11_Scheduler.d \
./App/_lab_03_SevSegmentsMux.d 


# Each subdirectory must supply rules for building sources it contributes
App/%.o: ../App/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


