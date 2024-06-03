/**
 * @file    main.cpp
 * @brief   Main application entry point.
 * @date    2023-03-23
 * @author  Andri Trottmann
 */

#include <iostream>
#include <string>
#include "templateLib.h"
#include "Module.h"

using namespace std;

int main(void)
{
    int number = 0;
    string inp;
    char *end_ptr;

    cout << "This is the application main" << endl;
    cout << "Greeting from Template-Lib: " << generateHelloStr("User") << endl;

    cout << "Enter a natural number in decimal format: ";
    cin >> inp;

    number = strtol(inp.c_str(), &end_ptr, 10);

    cout << "Input doubled is: " << functions::foo(number) << endl;

    return 0;
}