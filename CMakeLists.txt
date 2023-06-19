cmake_minimum_required(VERSION 3.22.0)

project(Triangle_Quadrangle)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(6_3Lib SHARED main.cpp equilateral_triangle.cpp figure.cpp isosceles_triangle.cpp
parallelogram.cpp quadrangle.cpp quadrilateral.cpp rectangle.cpp rhombus.cpp right_triangle.cpp 
square.cpp triangle.cpp WrongFigure.cpp WrongFigure2.cpp
equilateral_triangle.h figure.h isosceles_triangle.h parallelogram.h quadrangle.h quadrilateral.h rectangle.h rhombus.h 
right_triangle.h square.h triangle.h WrongFigure.h WrongFigure2.h)

add_executable(Different_figures main.cpp equilateral_triangle.cpp figure.cpp isosceles_triangle.cpp
parallelogram.cpp quadrangle.cpp quadrilateral.cpp rectangle.cpp rhombus.cpp right_triangle.cpp 
square.cpp triangle.cpp WrongFigure.cpp WrongFigure2.cpp
equilateral_triangle.h figure.h isosceles_triangle.h parallelogram.h quadrangle.h quadrilateral.h rectangle.h rhombus.h 
right_triangle.h square.h triangle.h WrongFigure.h WrongFigure2.h)

target_link_libraries(6_3Exe 6_3Lib)