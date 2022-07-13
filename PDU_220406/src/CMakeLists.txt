cmake_minimum_required(VERSION 3.2)

SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

SET(SRC_DIRECTORY_1 src)

SET(SRC_LIB_1
	app.cpp
	auth.cpp
	Dlg_GPSView.cpp
	Dlg_LoginView.cpp
	Dlg_MainView.cpp
	Dlg_View.cpp
	popup.cpp
	thread.cpp
	uart.cpp
)

PROJECT(PDU_DEMO)

INCLUDE_DIRECTORIES(src/include/)
LINK_DIRECTORIES(src/include/)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include/c++/10.2.0)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include/c++/10.2.0/aarch64-fslc-linux)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include/backward)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/lib/aarch64-fslc-linux/gcc/aarch64-fslc-linux/10.2.0/include)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/lib/aarch64-fslc-linux/gcc/aarch64-fslc-linux/10.2.0/include-fixed)

FILE(MAKE_DIRECTORY out)
#FILE(COPY script/ DESTINATION out/ )

ADD_EXECUTABLE(PDU_DEMO
	PDU_MAIN.cpp
	${SRC_LIB_1}
)

#TARGET_INCLUDE_DIRECTORIES(PDU_DEMO include/)
TARGET_LINK_LIBRARIES(PDU_DEMO -Llib geminit-gn-gdi mapdraw png16 jpeg rt m z pthread)


SET_TARGET_PROPERTIES(PDU_DEMO PROPERTIES RUNTIME_OUTPUT_DIRECTORY out)

add_custom_target(clean-all
   COMMAND ${CMAKE_BUILD_TOOL} clean
   COMMAND ${CMAKE_COMMAND} -P clean-all.cmake
)

