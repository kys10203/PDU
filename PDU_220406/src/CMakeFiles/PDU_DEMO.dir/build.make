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
include CMakeFiles/PDU_DEMO.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PDU_DEMO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PDU_DEMO.dir/flags.make

CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.o: PDU_MAIN.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/PDU_MAIN.cpp

CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/PDU_MAIN.cpp > CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.i

CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/PDU_MAIN.cpp -o CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.s

CMakeFiles/PDU_DEMO.dir/app.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/app.cpp.o: app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PDU_DEMO.dir/app.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/app.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/app.cpp

CMakeFiles/PDU_DEMO.dir/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/app.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/app.cpp > CMakeFiles/PDU_DEMO.dir/app.cpp.i

CMakeFiles/PDU_DEMO.dir/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/app.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/app.cpp -o CMakeFiles/PDU_DEMO.dir/app.cpp.s

CMakeFiles/PDU_DEMO.dir/auth.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/auth.cpp.o: auth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PDU_DEMO.dir/auth.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/auth.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/auth.cpp

CMakeFiles/PDU_DEMO.dir/auth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/auth.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/auth.cpp > CMakeFiles/PDU_DEMO.dir/auth.cpp.i

CMakeFiles/PDU_DEMO.dir/auth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/auth.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/auth.cpp -o CMakeFiles/PDU_DEMO.dir/auth.cpp.s

CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.o: Dlg_GPSView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_GPSView.cpp

CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_GPSView.cpp > CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.i

CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_GPSView.cpp -o CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.s

CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.o: Dlg_LoginView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_LoginView.cpp

CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_LoginView.cpp > CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.i

CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_LoginView.cpp -o CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.s

CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.o: Dlg_MainView.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_MainView.cpp

CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_MainView.cpp > CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.i

CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_MainView.cpp -o CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.s

CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.o: Dlg_View.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/Dlg_View.cpp

CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/Dlg_View.cpp > CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.i

CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/Dlg_View.cpp -o CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.s

CMakeFiles/PDU_DEMO.dir/popup.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/popup.cpp.o: popup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PDU_DEMO.dir/popup.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/popup.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/popup.cpp

CMakeFiles/PDU_DEMO.dir/popup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/popup.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/popup.cpp > CMakeFiles/PDU_DEMO.dir/popup.cpp.i

CMakeFiles/PDU_DEMO.dir/popup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/popup.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/popup.cpp -o CMakeFiles/PDU_DEMO.dir/popup.cpp.s

CMakeFiles/PDU_DEMO.dir/thread.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/thread.cpp.o: thread.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/PDU_DEMO.dir/thread.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/thread.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/thread.cpp

CMakeFiles/PDU_DEMO.dir/thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/thread.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/thread.cpp > CMakeFiles/PDU_DEMO.dir/thread.cpp.i

CMakeFiles/PDU_DEMO.dir/thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/thread.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/thread.cpp -o CMakeFiles/PDU_DEMO.dir/thread.cpp.s

CMakeFiles/PDU_DEMO.dir/uart.cpp.o: CMakeFiles/PDU_DEMO.dir/flags.make
CMakeFiles/PDU_DEMO.dir/uart.cpp.o: uart.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/PDU_DEMO.dir/uart.cpp.o"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PDU_DEMO.dir/uart.cpp.o -c /home/yeon/Project/PDU/PDU_220406/src/uart.cpp

CMakeFiles/PDU_DEMO.dir/uart.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PDU_DEMO.dir/uart.cpp.i"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yeon/Project/PDU/PDU_220406/src/uart.cpp > CMakeFiles/PDU_DEMO.dir/uart.cpp.i

CMakeFiles/PDU_DEMO.dir/uart.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PDU_DEMO.dir/uart.cpp.s"
	/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/bin/aarch64-fslc-linux/aarch64-fslc-linux-g++   -mcpu=cortex-a53 -march=armv8-a+crc+crypto -fstack-protector-strong  -O2 -D_FORTIFY_SOURCE=2 -Wformat -Wformat-security -Werror=format-security --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux --sysroot=/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yeon/Project/PDU/PDU_220406/src/uart.cpp -o CMakeFiles/PDU_DEMO.dir/uart.cpp.s

# Object files for target PDU_DEMO
PDU_DEMO_OBJECTS = \
"CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/app.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/auth.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/popup.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/thread.cpp.o" \
"CMakeFiles/PDU_DEMO.dir/uart.cpp.o"

# External object files for target PDU_DEMO
PDU_DEMO_EXTERNAL_OBJECTS =

out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/PDU_MAIN.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/app.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/auth.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/Dlg_GPSView.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/Dlg_LoginView.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/Dlg_MainView.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/Dlg_View.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/popup.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/thread.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/uart.cpp.o
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/build.make
out/PDU_DEMO: CMakeFiles/PDU_DEMO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yeon/Project/PDU/PDU_220406/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable out/PDU_DEMO"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PDU_DEMO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PDU_DEMO.dir/build: out/PDU_DEMO

.PHONY : CMakeFiles/PDU_DEMO.dir/build

CMakeFiles/PDU_DEMO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PDU_DEMO.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PDU_DEMO.dir/clean

CMakeFiles/PDU_DEMO.dir/depend:
	cd /home/yeon/Project/PDU/PDU_220406/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src /home/yeon/Project/PDU/PDU_220406/src/CMakeFiles/PDU_DEMO.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PDU_DEMO.dir/depend
