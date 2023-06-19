#include "triangle.h"
#include "WrongFigure.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name) : a_(a), b_(b), c_(c), A_(A), B_(B), C_(C), Figure(name) 
{
    if (A + B + C != 180)
        throw WrongFigure();
};
int Triangle::get_a() { return a_; };
int Triangle::get_b() { return b_; };
int Triangle::get_c() { return c_; };
int Triangle::get_A() { return A_; };
int Triangle::get_B() { return B_; };
int Triangle::get_C() { return C_; };

void Triangle::print()
{
    std::cout << this->get_name() << "(стороны " << a_ << ", " << b_ << ", " << c_ << "; углы "
        << A_ << ", " << B_ << ", " << C_ << ')' << std::endl << std::endl;
}