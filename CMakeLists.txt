cmake_minimum_required(VERSION 3.14)
project(Demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Demo main.cpp IFood.cpp Rice.cpp Bread.cpp FoodFactory.cpp Utils.cpp Utils.h Parameter.cpp Parameter.h RegexParameter.cpp RegexParameter.h BoolParameter.cpp BoolParameter.h StringParameter.cpp StringParameter.h NumericParameter.cpp NumericParameter.h)