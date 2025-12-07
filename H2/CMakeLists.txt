cmake_minimum_required(VERSION 3.16)

project(Harjoitus2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Harjoitus2 main.cpp
    car.h car.cpp
    rectangle.h rectangle.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Harjoitus2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
