################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/gnlib/button.c \
../src/gnlib/calendar.c \
../src/gnlib/checkbox.c \
../src/gnlib/fontinfo.c \
../src/gnlib/gx.c \
../src/gnlib/gxbdf.c \
../src/gnlib/gxbmp.c \
../src/gnlib/gxjpg.c \
../src/gnlib/gxpng.c \
../src/gnlib/ksc5601.c \
../src/gnlib/popup.c \
../src/gnlib/popup_message.c \
../src/gnlib/progress.c \
../src/gnlib/progress_status.c \
../src/gnlib/scroll.c \
../src/gnlib/table.c \
../src/gnlib/textbox.c 

C_DEPS += \
./src/gnlib/button.d \
./src/gnlib/calendar.d \
./src/gnlib/checkbox.d \
./src/gnlib/fontinfo.d \
./src/gnlib/gx.d \
./src/gnlib/gxbdf.d \
./src/gnlib/gxbmp.d \
./src/gnlib/gxjpg.d \
./src/gnlib/gxpng.d \
./src/gnlib/ksc5601.d \
./src/gnlib/popup.d \
./src/gnlib/popup_message.d \
./src/gnlib/progress.d \
./src/gnlib/progress_status.d \
./src/gnlib/scroll.d \
./src/gnlib/table.d \
./src/gnlib/textbox.d 

OBJS += \
./src/gnlib/button.o \
./src/gnlib/calendar.o \
./src/gnlib/checkbox.o \
./src/gnlib/fontinfo.o \
./src/gnlib/gx.o \
./src/gnlib/gxbdf.o \
./src/gnlib/gxbmp.o \
./src/gnlib/gxjpg.o \
./src/gnlib/gxpng.o \
./src/gnlib/ksc5601.o \
./src/gnlib/popup.o \
./src/gnlib/popup_message.o \
./src/gnlib/progress.o \
./src/gnlib/progress_status.o \
./src/gnlib/scroll.o \
./src/gnlib/table.o \
./src/gnlib/textbox.o 


# Each subdirectory must supply rules for building sources it contributes
src/gnlib/%.o: ../src/gnlib/%.c src/gnlib/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	aarch64-fslc-linux-g++  -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-xwayland/3.3/sysroots/cortexa53-crypto-fslc-linux -I"/home/suhwan/eclipse-workspace/TEST/src/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-gnlib

clean-src-2f-gnlib:
	-$(RM) ./src/gnlib/button.d ./src/gnlib/button.o ./src/gnlib/calendar.d ./src/gnlib/calendar.o ./src/gnlib/checkbox.d ./src/gnlib/checkbox.o ./src/gnlib/fontinfo.d ./src/gnlib/fontinfo.o ./src/gnlib/gx.d ./src/gnlib/gx.o ./src/gnlib/gxbdf.d ./src/gnlib/gxbdf.o ./src/gnlib/gxbmp.d ./src/gnlib/gxbmp.o ./src/gnlib/gxjpg.d ./src/gnlib/gxjpg.o ./src/gnlib/gxpng.d ./src/gnlib/gxpng.o ./src/gnlib/ksc5601.d ./src/gnlib/ksc5601.o ./src/gnlib/popup.d ./src/gnlib/popup.o ./src/gnlib/popup_message.d ./src/gnlib/popup_message.o ./src/gnlib/progress.d ./src/gnlib/progress.o ./src/gnlib/progress_status.d ./src/gnlib/progress_status.o ./src/gnlib/scroll.d ./src/gnlib/scroll.o ./src/gnlib/table.d ./src/gnlib/table.o ./src/gnlib/textbox.d ./src/gnlib/textbox.o

.PHONY: clean-src-2f-gnlib

