cmake_minimum_required(VERSION 3.16)

project(exerciciosIntrodutorios LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(exercicio1 exercicio1.cpp)
add_executable(exercicio2 exercicio2.cpp)
add_executable(exercicio3 exercicio3.cpp)
add_executable(exercicio4 exercicio4.cpp)
add_executable(exercicio5 exercicio5.cpp)

include(GNUInstallDirs)
install(TARGETS exercicio1 exercicio2
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
