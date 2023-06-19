#include "WrongFigure.h"
#include <iostream>

const std::string WrongFigure::what() 
{ 
	return "Ошибка создания фигуры. Причина: сумма углов не равна 180";
}
