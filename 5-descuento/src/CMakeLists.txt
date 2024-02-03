# Fichero CMake de LuisPa

# Parar si la versión es menor de 3.0
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# Nombre de proyecto y habilito C++
project(descuento LANGUAGES CXX)

# Requiero la versión C++ 11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Defino el ejecutable de salida
add_executable(descuento "")

# Defino cuales son sus fuentes
target_sources(
    descuento
    PRIVATE
        descuento.cpp   
    )
