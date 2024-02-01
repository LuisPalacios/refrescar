# Fichero CMake de LuisPa

# Parar si la versión es menor de 3.0
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# Nombre de proyecto y habilito C++
project(runTests LANGUAGES CXX)

# Requiero la versión C++ 11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Localizo GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS}) 

# Defino el ejecutable de salida
add_executable(runTests cuadrado.cpp)

# Link de la libreria de Google con la app
# Añado la librería pthread o no compilará
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Defino cuales son sus fuentes
#target_sources(
#    runTests
#    PRIVATE
#        cuadrado.cpp
#        queprobar.cpp   
#    )
