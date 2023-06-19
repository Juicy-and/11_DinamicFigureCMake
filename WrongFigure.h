#pragma once
#include <iostream>

class WrongFigure : std::exception
{
public:
	const std::string what();
};

