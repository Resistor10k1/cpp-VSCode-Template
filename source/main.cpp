/**
 * @file    main.cpp
 * @brief   Main application entry point.
 * @date    2023-03-23
 * @author  Andri Trottmann
 */


#include <iostream>
#include "templateLib.h"

using namespace std;


int main(void)
{
    cout << "This is the application main" << endl;
    cout << "Additional output ..." << endl;
    cout << "Greeting: " << generateHelloStr("User") << endl;
    return 0;
}