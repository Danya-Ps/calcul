cmake_minimum_required(VERSION 3.21)



# так пишутся комментарии



project(TP)


add_executable(TP main.cpp push_pop.cpp)

add_subdirectory(..\calc)

#add_subdirectory(MyTest)


#add_subdirectory(googletest-main)



target_link_libraries(TP ..\calc)






#target_include_directories(main PUBLIC "D:/BETA/tehn_progr/boost_1_77_0")


#target_link_directories(main PUBLIC "D:/BETA/tehn_progr/boost_1_77_0/stage/lib")

