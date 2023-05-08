/**
 * @file    templateLib.h
 * @brief   Some example library
 * @date    2023-05-08
 * @author  Andri Trottmann
 */

#pragma once

#include <string>


/**
 * @brief Generates a hello message
 * @param personName The name of the person t greet
 * @return A greeting string
*/
const std::string generateHelloStr(const std::string& personName);

