#include "quadrilateral.h"
#include "WrongFigure2.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : a_(a), b_(b), c_(c), d_(d), A_(A), B_(B), C_(C), D_(D), Figure(name)
{
    if (A + B + C + D!= 360)
        throw WrongFigure2();
};
int Quadrilateral::get_a() { return a_; }
int Quadrilateral::get_b() { return b_; }
int Quadrilateral::get_c() { return c_; }
int Quadrilateral::get_d() { return d_; }
int Quadrilateral::get_A() { return A_; }
int Quadrilateral::get_B() { return B_; }
int Quadrilateral::get_C() { return C_; }
int Quadrilateral::get_D() { return D_; }
void Quadrilateral::print()
{
    std::cout << this->get_name() << "(стороны " << a_ << ", " << b_ << ", " << c_ << ", " << d_ << "; углы "
        << A_ << ", " << B_ << ", " << C_ << ", " << D_ << ")" << std::endl << std::endl;
}