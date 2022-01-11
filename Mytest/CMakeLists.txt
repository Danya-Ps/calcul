add_executable(testing pch.cpp test.cpp)


target_link_libraries(testing calc gtest_main)


target_include_directories(testing PUBLIC "C:/Users/NASTIA/Desktop/Rabota_Danya/calcul/googletest-main/googletest/include")




target_link_directories(testing PUBLIC "C:/Users/NASTIA/Desktop/Rabota_Danya/calcul/googletest-main/build/lib/Debug")
