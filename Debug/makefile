################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/SevSegments/subdir.mk
-include HAL/Keypad/subdir.mk
-include HAL/BCDSevSegments/subdir.mk
-include App/subdir.mk
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
LSS += \
ATMega32_Preipherals_Interfacing.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: ATMega32_Preipherals_Interfacing.elf secondary-outputs

# Tool invocations
ATMega32_Preipherals_Interfacing.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,ATMega32_Preipherals_Interfacing.map -mmcu=atmega32 -o "ATMega32_Preipherals_Interfacing.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

ATMega32_Preipherals_Interfacing.lss: ATMega32_Preipherals_Interfacing.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S ATMega32_Preipherals_Interfacing.elf  >"ATMega32_Preipherals_Interfacing.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: ATMega32_Preipherals_Interfacing.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 ATMega32_Preipherals_Interfacing.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) ATMega32_Preipherals_Interfacing.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
