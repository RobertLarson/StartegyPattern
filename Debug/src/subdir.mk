################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BlasterBehavior.cpp \
../src/Chewy.cpp \
../src/CrossBowBehavior.cpp \
../src/HanSolo.cpp \
../src/LightSaberBehavior.cpp \
../src/LukeSkywalker.cpp \
../src/StarWarsCharacter.cpp \
../src/StarWarsCharacterMain.cpp 

OBJS += \
./src/BlasterBehavior.o \
./src/Chewy.o \
./src/CrossBowBehavior.o \
./src/HanSolo.o \
./src/LightSaberBehavior.o \
./src/LukeSkywalker.o \
./src/StarWarsCharacter.o \
./src/StarWarsCharacterMain.o 

CPP_DEPS += \
./src/BlasterBehavior.d \
./src/Chewy.d \
./src/CrossBowBehavior.d \
./src/HanSolo.d \
./src/LightSaberBehavior.d \
./src/LukeSkywalker.d \
./src/StarWarsCharacter.d \
./src/StarWarsCharacterMain.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


