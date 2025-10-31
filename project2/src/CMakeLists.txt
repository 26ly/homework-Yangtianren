set(SOURCES main.cpp cv.cpp MyException.cpp iread.cpp)
add_executable(Cvproject2_app ${SOURCES})
target_link_libraries(Cvproject2_app PRIVATE ${OpenCV_LIBS})
target_include_directories(Cvproject2_app PRIVATE ${CMAKE_SOURCES_DIR}/include)