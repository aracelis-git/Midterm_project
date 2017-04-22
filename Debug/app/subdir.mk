################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../app/game.cpp \
../app/gameBoard.cpp \
../app/main.cpp \
../app/qLearning.cpp 

OBJS += \
./app/game.o \
./app/gameBoard.o \
./app/main.o \
./app/qLearning.o 

CPP_DEPS += \
./app/game.d \
./app/gameBoard.d \
./app/main.d \
./app/qLearning.d 


# Each subdirectory must supply rules for building sources it contributes
app/%.o: ../app/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


