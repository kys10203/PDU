################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Dlg_GPSView.cpp \
../src/Dlg_LoginView.cpp \
../src/Dlg_MainView.cpp \
../src/Dlg_View.cpp \
../src/PDU_MAIN.cpp \
../src/app.cpp \
../src/auth.cpp \
../src/popup.cpp \
../src/thread.cpp \
../src/uart.cpp 

CPP_DEPS += \
./src/Dlg_GPSView.d \
./src/Dlg_LoginView.d \
./src/Dlg_MainView.d \
./src/Dlg_View.d \
./src/PDU_MAIN.d \
./src/app.d \
./src/auth.d \
./src/popup.d \
./src/thread.d \
./src/uart.d 

OBJS += \
./src/Dlg_GPSView.o \
./src/Dlg_LoginView.o \
./src/Dlg_MainView.o \
./src/Dlg_View.o \
./src/PDU_MAIN.o \
./src/app.o \
./src/auth.o \
./src/popup.o \
./src/thread.o \
./src/uart.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	aarch64-fslc-linux-g++  -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-xwayland/3.3/sysroots/cortexa53-crypto-fslc-linux -I"/home/suhwan/eclipse-workspace/TEST/src/include" -O2 -g3 -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Dlg_GPSView.d ./src/Dlg_GPSView.o ./src/Dlg_LoginView.d ./src/Dlg_LoginView.o ./src/Dlg_MainView.d ./src/Dlg_MainView.o ./src/Dlg_View.d ./src/Dlg_View.o ./src/PDU_MAIN.d ./src/PDU_MAIN.o ./src/app.d ./src/app.o ./src/auth.d ./src/auth.o ./src/popup.d ./src/popup.o ./src/thread.d ./src/thread.o ./src/uart.d ./src/uart.o

.PHONY: clean-src

