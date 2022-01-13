cmake_minimum_required(VERSION 3.21)



# так пишутся комментарии



project(calcul)


add_executable(main main.cpp push_pop.cpp)

add_subdirectory(calc)

add_subdirectory(Mytest)


add_subdirectory(googletest-main)



target_link_libraries(main calc)

target_link_libraries(main calc)




#target_include_directories(main PUBLIC "C:/Users/NASTIA/Desktop/Rabota_Danya/boost_1_77_0/boost_1_77_0")


#target_link_directories(main PUBLIC "C:/Users/NASTIA/Desktop/Rabota_Danya/boost_1_77_0/boost_1_77_0/stage/lib")