#pragma once
#include <string>

class Figure 
{
protected:
    std::string name_;
public:
    Figure(std::string name) : name_(name) {}
    std::string get_name();
};
