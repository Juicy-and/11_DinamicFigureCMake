#pragma once
#include <iostream>
class WrongFigure2 :
    public std::exception
{
public:
	const std::string what();
};

