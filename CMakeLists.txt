cmake_minimum_required(VERSION 3.21)

project(ASPM181)

add_executable(main main.cpp initialization.cpp)

add_subdirectory(Math_func)
add_subdirectory(TEST)
add_subdirectory(googletest-main)

target_link_libraries(main Math_func)

target_include_directories(main PUBLIC "D:/BETA/tehn_progr/boost_1_77_0")
target_link_directories(main PUBLIC "D:/BETA/tehn_progr/boost_1_77_0/stage/lib")

