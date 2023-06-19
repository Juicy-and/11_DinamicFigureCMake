#include <iostream>
#include <string>
#include "equilateral_triangle.h"
#include "figure.h"
#include "isosceles_triangle.h"
#include "parallelogram.h"
#include "quadrangle.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "rhombus.h"
#include "right_triangle.h"
#include "square.h"
#include "triangle.h"
#include "WrongFigure.h"
#include "WrongFigure2.h"
int main()
{
    setlocale(LC_ALL, "Russian");
    try {
        Triangle treug(10, 20, 30, 50, 60, 70, "Треугольник: ");
        treug.print();
        Right_triangle ritr(10, 20, 30, 30, 60, "Прямоугольный треугольник: ");
        ritr.print();
        Isosceles_triangle istr(10, 20, 70, 40, "Равнобедренный треугольник: ");
        istr.print();
        Equilateral_triangle eqtr(30, "Равносторонний треугольник: ");
        eqtr.print();
        Quadrangle qudgle(10, 20, 30, 40, 60, 120, 60, 120, "Четырёхугольник: ");
        qudgle.print();
        Rectangle recgle(10, 20, "Прямоугольник: ");
        recgle.print();
        Square square(20, "Квадрат: ");
        square.print();
        Parallelogram prll(20, 30, 60, 120, "Параллелограмм: ");
        prll.print();
        Rhombus rhombus(30, 60, 120, "Ромб: ");
        rhombus.print();
    }
    catch (WrongFigure& e)
    {
        std::cerr << e.what();
    }
    catch (WrongFigure2& e)
    {
        std::cerr << e.what();
    }
}

