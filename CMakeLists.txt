# Generated from rasterwindow.pro.

cmake_minimum_required(VERSION 3.16)
project(qtlearning LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


# 查找QT包
find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Widgets)
find_package(Qt6 COMPONENTS UiTools)

add_subdirectory(design_patterns/1_factory_method)

