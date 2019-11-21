################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Cachorros.c \
../src/CachorrosParcial.c \
../src/Controller.c \
../src/LinkedList.c \
../src/parser.c 

OBJS += \
./src/Cachorros.o \
./src/CachorrosParcial.o \
./src/Controller.o \
./src/LinkedList.o \
./src/parser.o 

C_DEPS += \
./src/Cachorros.d \
./src/CachorrosParcial.d \
./src/Controller.d \
./src/LinkedList.d \
./src/parser.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


