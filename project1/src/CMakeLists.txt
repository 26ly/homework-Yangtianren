set(SOURCES main.cpp Matrix.cpp MyException.cpp)
add_executable(Matrixproject1 ${SOURCES})
target_include_directories(Matrixproject1 PRIVATE ${CMAKE_SOURCES_DIR}/include)