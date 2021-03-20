cmake_minimum_required(VERSION 3.5)
project(lab03)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/product.cpp src/item.cpp src/invoice.cpp src/textprinter.cpp)
add_executable(lab03 ${SOURCE_FILES})
