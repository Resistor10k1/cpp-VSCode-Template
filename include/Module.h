/**
 * @file    Module.h
 * @brief   Some example header file
 * @date    2023-03-23
 * @author  Andri Trottmann
 */

#pragma once

#include <string>
#include <vector>
#include "Interface.h"


// Function headers ==================================================

//===================================================================================================
/**
 * @brief Namespace for functions
*/
namespace functions
{

/**
 * @brief Doubles number
 * @param number Number to double
 * @return Returns 2 * number
*/
int foo(int number);

/**
 * @brief Multiplies a vector with the given scalar.
 * @param vec Vector to be multiplied.
 * @param factor Scalar
*/
void vecmul(std::vector<double>& vec, double factor);

} // namespace functions

//===================================================================================================
/**
 * @brief Namespace for classes
*/
namespace classes
{

/**
 * @brief Example class
*/
class MyClass : public Interface
{
    public:
        /**
         * @brief Constructor
         * @param name Unique name of the instance
        */
        MyClass(const std::string& name);

        /**
         * @brief Prints the name to the console.
        */
        void print(void);

        /**
         * @brief Implementation pure virtual function
         * @return Returns the id.
        */
        int doSomething(void) override;

        /**
         * @brief Get the name of the instance
         * @return Returns the name
        */
        std::string& getName(void);

    private:
        std::string name = ""; /**< Private member*/

};


} // namespace functions
