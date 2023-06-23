#pragma once
#include <iostream>
#include "figure.h"

class Quadrilateral : public Figure
{
private:
    int a_, b_, c_, d_, A_, B_, C_, D_;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    int get_A();
    int get_B();
    int get_C();
    int get_D();
    void print();
};
