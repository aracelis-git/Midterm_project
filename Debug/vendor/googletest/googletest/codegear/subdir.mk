################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../vendor/googletest/googletest/codegear/gtest_all.cc \
../vendor/googletest/googletest/codegear/gtest_link.cc 

CC_DEPS += \
./vendor/googletest/googletest/codegear/gtest_all.d \
./vendor/googletest/googletest/codegear/gtest_link.d 

OBJS += \
./vendor/googletest/googletest/codegear/gtest_all.o \
./vendor/googletest/googletest/codegear/gtest_link.o 


# Each subdirectory must supply rules for building sources it contributes
vendor/googletest/googletest/codegear/%.o: ../vendor/googletest/googletest/codegear/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


