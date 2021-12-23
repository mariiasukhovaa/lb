add_executable(TEST pch.cpp test.cpp)

target_link_libraries(TEST Math_func gtest_main)

#target_include_directories(TEST PUBLIC "D:/BETA/tehn_progr/labv_2/googletest-main/googletest/include")
#target_link_directories(TEST PUBLIC "D:/BETA/Tehn_progr/labv_2/googletest-main/build/lib/Debug")
