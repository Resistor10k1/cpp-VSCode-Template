/**
 * @file    unittest_main.cpp
 * @brief   A collection of unit-tests for the functions and classes in this project.
 * @date    2023-03-23
 * @author  Andri Trottmann
 */


#include <vector>
#include <string>
#include "Module.h"
#include "gtest/gtest.h"

using namespace std;


// Start unit-tests for Module::functions ===============================================================

/**
 * @brief Tests the calculation of function foo() with non zero number.
*/
TEST(ModuleFunctionsTest, fooNonZeroNumber) {
    int testnr = 3;
    int testnr_val = 6;
    
    EXPECT_EQ(functions::foo(testnr), testnr_val);
}

/**
 * @brief Tests the calculation of function foo() with 0.
*/
TEST(ModuleFunctionsTest, fooZeroNumber) {
    int testnr = 0;
    int testnr_val = 0;
    
    EXPECT_EQ(functions::foo(testnr), testnr_val);
}


/**
 * @brief Tests the calculation of funciton vecmul() with non zero vector
*/
TEST(ModuleFunctionsTest, vecmulNonZeroVector) {
    vector<double> testvec = {1, 2, 3};
    vector<double> testvec_val = {2.3, 4.6, 6.9};
    double f = 2.3;
    
    // do calculations
    functions::vecmul(testvec, f);

    for(size_t i=0; i<testvec.size(); ++i)
    {
        EXPECT_DOUBLE_EQ(testvec[i], testvec_val[i]);
    }
}

/**
 * @brief Tests the calculation of funciton vecmul() with zero vector
*/
TEST(ModuleFunctionsTest, vecmulZeroVector) {
    vector<double> testvec = {0, 0, 0, 0};
    vector<double> testvec_val = {0, 0, 0, 0};
    double f = 2.3;
    
    // do calculations
    functions::vecmul(testvec, f);

    for(size_t i=0; i<testvec.size(); ++i)
    {
        EXPECT_EQ(testvec[i], testvec_val[i]);
    }
}

// End unit-tests for Module::functions ===============================================================

// Start unit-tests for Module::classes ===============================================================

/**
 * @brief Tests if the name is set correctly.
*/
TEST(ModuleClassesTest, nameSetCorrectly) {
    classes::MyClass m("MyClass");
    string m_name_val = "MyClass";

    EXPECT_EQ(m.getName(), m_name_val);
}

TEST(ModuleClassesTest, outputCorrect) {
    classes::MyClass m("TestClass");
    string m_print_val = "TestClass";
    char c;

    cout << "This is class " << m_print_val << endl;
    m.print();

    cout << "Enter c if output matches:";
    cin >> c;

    EXPECT_EQ(c, 'c');

}

TEST(ModuleClassesTest, idCorrect) {
    classes::MyClass m("MyClass");
    int id_val = 111;

    EXPECT_EQ(m.doSomething(), id_val);
}


// End unit-tests for Module::classes ===============================================================


