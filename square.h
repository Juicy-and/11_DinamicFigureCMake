#pragma once
#include "quadrilateral.h"

class Square : public Quadrilateral
{
public:
    Square(int a, std::string name, const int C = 90);
};
