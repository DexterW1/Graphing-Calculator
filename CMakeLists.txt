CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
	unit_test.cpp
	src/rand.cpp
	src/op.cpp
	src/mult.cpp
	src/div.cpp
	src/sub.cpp
	src/add.cpp
	src/pow.cpp
	src/sin.cpp
	src/cos.cpp
	src/tan.cpp
	src/operator.cpp
	src/eval.cpp
	src/trig.cpp
	src/calculation_strategy.cpp
	src/graphing_strategy.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

