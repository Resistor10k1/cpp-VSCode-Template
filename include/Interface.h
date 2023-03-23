/**
 * @file    Interface.h
 * @brief   Example interface
 * @date    2023-03-23
 * @author  Andri Trottmann
 */

#pragma once

#include <iostream>


/**
 * @brief Abstract class
*/
class Interface
{
    public:

        /**
         * @brief Interface Constructor
        */
        Interface() {}
        
        /**
         * @brief Interface Deconstructor
        */
        virtual ~Interface() {};

        /**
         * @brief Pure virtual function
         * @return Returns something.
        */
        virtual int doSomething(void) = 0;

        /**
         * @brief Returns the ID
         * @return The ID of datatype int.
        */
        int getId(void) const
        {
            return id;
        }

    protected:
        int id = 111; /**< Identifier */
};
