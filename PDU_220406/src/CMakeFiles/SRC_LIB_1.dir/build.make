# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/cmake

# The command to remove a file.
RM = /opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yeon/Project/PDU/PDU_220406/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yeon/Project/PDU/PDU_220406/src

# Include any dependencies generated for this target.
include CMakeFiles/SRC_LIB_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SRC_LIB_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SRC_LIB_1.dir/flags.make

CMakeFiles/SRC_LIB_1.dir/app.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/app.cpp.o: app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SRC_LIB_1.dir/app.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/app.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/app.cpp

CMakeFiles/SRC_LIB_1.dir/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/app.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/app.cpp > CMakeFiles/SRC_LIB_1.dir/app.cpp.i

CMakeFiles/SRC_LIB_1.dir/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/app.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/app.cpp -o CMakeFiles/SRC_LIB_1.dir/app.cpp.s

CMakeFiles/SRC_LIB_1.dir/auth.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/auth.cpp.o: auth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SRC_LIB_1.dir/auth.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/auth.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/auth.cpp

CMakeFiles/SRC_LIB_1.dir/auth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/auth.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/auth.cpp > CMakeFiles/SRC_LIB_1.dir/auth.cpp.i

CMakeFiles/SRC_LIB_1.dir/auth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/auth.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/auth.cpp -o CMakeFiles/SRC_LIB_1.dir/auth.cpp.s

CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.o: Dlg_GPSView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_GPSView.cpp

CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_GPSView.cpp > CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.i

CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_GPSView.cpp -o CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.s

CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.o: Dlg_LoginView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_LoginView.cpp

CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_LoginView.cpp > CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.i

CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_LoginView.cpp -o CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.s

CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.o: Dlg_MainView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_MainView.cpp

CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_MainView.cpp > CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.i

CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_MainView.cpp -o CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.s

CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.o: Dlg_View.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_View.cpp

CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_View.cpp > CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.i

CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_View.cpp -o CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.s

CMakeFiles/SRC_LIB_1.dir/popup.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/popup.cpp.o: popup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SRC_LIB_1.dir/popup.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/popup.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/popup.cpp

CMakeFiles/SRC_LIB_1.dir/popup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/popup.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/popup.cpp > CMakeFiles/SRC_LIB_1.dir/popup.cpp.i

CMakeFiles/SRC_LIB_1.dir/popup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/popup.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/popup.cpp -o CMakeFiles/SRC_LIB_1.dir/popup.cpp.s

CMakeFiles/SRC_LIB_1.dir/thread.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/thread.cpp.o: thread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SRC_LIB_1.dir/thread.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/thread.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/thread.cpp

CMakeFiles/SRC_LIB_1.dir/thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/thread.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/thread.cpp > CMakeFiles/SRC_LIB_1.dir/thread.cpp.i

CMakeFiles/SRC_LIB_1.dir/thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/thread.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/thread.cpp -o CMakeFiles/SRC_LIB_1.dir/thread.cpp.s

CMakeFiles/SRC_LIB_1.dir/uart.cpp.o: CMakeFiles/SRC_LIB_1.dir/flags.make
CMakeFiles/SRC_LIB_1.dir/uart.cpp.o: uart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SRC_LIB_1.dir/uart.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SRC_LIB_1.dir/uart.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/uart.cpp

CMakeFiles/SRC_LIB_1.dir/uart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SRC_LIB_1.dir/uart.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/uart.cpp > CMakeFiles/SRC_LIB_1.dir/uart.cpp.i

CMakeFiles/SRC_LIB_1.dir/uart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SRC_LIB_1.dir/uart.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/uart.cpp -o CMakeFiles/SRC_LIB_1.dir/uart.cpp.s

# Object files for target SRC_LIB_1
SRC_LIB_1_OBJECTS = \
"CMakeFiles/SRC_LIB_1.dir/app.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/auth.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/popup.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/thread.cpp.o" \
"CMakeFiles/SRC_LIB_1.dir/uart.cpp.o"

# External object files for target SRC_LIB_1
SRC_LIB_1_EXTERNAL_OBJECTS =

libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/app.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/auth.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/Dlg_GPSView.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/Dlg_LoginView.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/Dlg_MainView.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/Dlg_View.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/popup.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/thread.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/uart.cpp.o
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/build.make
libSRC_LIB_1.a: CMakeFiles/SRC_LIB_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library libSRC_LIB_1.a"
	$(CMAKE_COMMAND) -P CMakeFiles/SRC_LIB_1.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SRC_LIB_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SRC_LIB_1.dir/build: libSRC_LIB_1.a

.PHONY : CMakeFiles/SRC_LIB_1.dir/build

CMakeFiles/SRC_LIB_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SRC_LIB_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SRC_LIB_1.dir/clean

CMakeFiles/SRC_LIB_1.dir/depend:
	cd /home/yeon/Project/PDU/PDU_220406/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src/CMakeFiles/SRC_LIB_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SRC_LIB_1.dir/depend

