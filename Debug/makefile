################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include vendor/googletest/googletest/xcode/Samples/FrameworkSample/subdir.mk
-include vendor/googletest/googletest/test/subdir.mk
-include vendor/googletest/googletest/src/subdir.mk
-include vendor/googletest/googletest/samples/subdir.mk
-include vendor/googletest/googletest/codegear/subdir.mk
-include vendor/googletest/googlemock/test/subdir.mk
-include vendor/googletest/googlemock/src/subdir.mk
-include test/subdir.mk
-include build/vendor/googletest/googletest/CMakeFiles/gtest_main.dir/src/subdir.mk
-include build/vendor/googletest/googletest/CMakeFiles/gtest.dir/src/subdir.mk
-include build/test/CMakeFiles/cpp-test.dir/subdir.mk
-include build/app/CMakeFiles/tictactoegame.dir/subdir.mk
-include build/app/CMakeFiles/scratch.dir/subdir.mk
-include build/CMakeFiles/3.2.2/CompilerIdCXX/subdir.mk
-include build/CMakeFiles/3.2.2/CompilerIdC/subdir.mk
-include build/CMakeFiles/subdir.mk
-include app/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Midterm_project

# Tool invocations
Midterm_project: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross G++ Linker'
	g++  -o "Midterm_project" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(CC_DEPS)$(C++_DEPS)$(EXECUTABLES)$(OBJS)$(C_UPPER_DEPS)$(CXX_DEPS)$(C_DEPS)$(CPP_DEPS) Midterm_project
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
