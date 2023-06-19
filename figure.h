#pragma once
#include <string>

#ifdef DINAMICFIGURELIBRARY_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif

class Figure 
{
protected:
    std::string name_;
public:
    Figure(std::string name) : name_(name) {}
    std::string get_name();
};
