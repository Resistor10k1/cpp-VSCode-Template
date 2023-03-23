/**
 * @file    Module.cpp
 * @brief   Implementation of Module.h
 * @date    2023-03-23
 * @author  Andri Trottmann
 */

#include "Module.h"
#include <iostream>

//===================================================================================================
namespace functions{

int foo(int number)
{
    return 2*number;
}

void vecmul(std::vector<double>& vec, double factor)
{
    for(auto& elem : vec)
    {
        elem *= factor;
    }
}

} // namespace functions

//===================================================================================================
namespace classes{

MyClass::MyClass(const std::string& name) : name(name) {}

void MyClass::print(void)
{
    std::cout << "This is class " << name << std::endl;
}

int MyClass::doSomething(void)
{
    return id;
}

std::string& MyClass::getName(void)
{
    return name;
}

} // namespace classes

