#pragma once
#include <iostream>
#include "figure.h"

class Triangle : public Figure
{
private:
    int a_, b_, c_, A_, B_, C_;
public:
    Triangle(int a, int b, int c, int A, int B, int C, std::string name);
    int get_a();
    int get_b();
    int get_c();
    int get_A();
    int get_B();
    int get_C();
    void print();
};

