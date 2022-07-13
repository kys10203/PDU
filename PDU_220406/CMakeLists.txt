cmake_minimum_required(VERSION 3.2)

SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

SET(SRC_DIRECTORY_1 src)
SET(SRC_DIRECTORY_2 src/include)
SET(SRC_DIRECTORY_3 src/include/include)
SET(SRC_DIRECTORY_4 src/include/include/gdi)

SET(SRC_LIB_1
	${SRC_DIRECTORY_1}/app.cpp
	${SRC_DIRECTORY_1}/auth.cpp
	${SRC_DIRECTORY_1}/Dlg_GPSView.cpp
	${SRC_DIRECTORY_1}/Dlg_LoginView.cpp
	${SRC_DIRECTORY_1}/Dlg_MainView.cpp
	${SRC_DIRECTORY_1}/Dlg_View.cpp
	${SRC_DIRECTORY_1}/popup.cpp
	${SRC_DIRECTORY_1}/thread.cpp
	${SRC_DIRECTORY_1}/uart.cpp
)

#FILE(GLOB_RECURSE SRC_EX1 .h)
#FILE(GLOB_RECURSE SRC_EX2 ${SRC_DIRECTORY_2}/.cpp ${SRC_DIRECTORY_2}/.h)
#FILE(GLOB_RECURSE SRC_EX3 ${SRC_DIRECTORY_3}/.cpp ${SRC_DIRECTORY_3}/.h)
#FILE(GLOB_RECURSE SRC_EX4 ${SRC_DIRECTORY_4}/.cpp ${SRC_DIRECTORY_4}/.h)

PROJECT(PDU_DEMO)

INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include/c++/10.2.0)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include/c++/10.2.0/aarch64-fslc-linux)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/cortexa53-crypto-fslc-linux/usr/include/backward)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/lib/aarch64-fslc-linux/gcc/aarch64-fslc-linux/10.2.0/include)
INCLUDE_DIRECTORIES(/opt/fslc-wayland/3.3/sysroots/x86_64-fslcsdk-linux/usr/lib/aarch64-fslc-linux/gcc/aarch64-fslc-linux/10.2.0/include-fixed)
INCLUDE_DIRECTORIES()

#FILE(MAKE_DIRECTORY out)
#FILE(MAKE_DIRECTORY out/lib)
#FILE(MAKE_DIRECTORY out/fonts)
#FILE(MAKE_DIRECTORY out/images)
#FILE(COPY script/ DESTINATION out/ )
#FILE(COPY lib/ DESTINATION out/lib/ )
#FILE(COPY fonts/ DESTINATION out/fonts/ )
#FILE(COPY images/ DESTINATION out/images/ )

ADD_EXECUTABLE(PDU_DEMO
	${SRC_DIRECTORY_1}/PDU_MAIN.cpp
	${SRC_LIB_1}
#	${SRC_EX1}
#	${SRC_EX2}
#	${SRC_EX3}
#	${SRC_EX4}
)

TARGET_LINK_LIBRARIES(PDU_DEMO -Llib geminit-gn-gdi png16 jpeg mapdraw rt m z pthread)
#TARGET_LINK_LIBRARIES(PDU_DEMO PUBLIC ${SRC_EX1})
#TARGET_LINK_LIBRARIES(PDU_DEMO PUBLIC ${SRC_EX2})
#TARGET_LINK_LIBRARIES(PDU_DEMO PUBLIC ${SRC_EX3})
#TARGET_LINK_LIBRARIES(PDU_DEMO PUBLIC ${SRC_EX4})

SET_TARGET_PROPERTIES(PDU_DEMO PROPERTIES RUNTIME_OUTPUT_DIRECTORY out)

add_custom_target(clean-all
   COMMAND ${CMAKE_BUILD_TOOL} clean
   COMMAND ${CMAKE_COMMAND} -P clean-all.cmake
)

