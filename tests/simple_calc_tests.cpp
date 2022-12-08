#include "lib/calculus.h"
#include <gtest/gtest.h>


TEST(SimpleCalcTestSuite, IsNum1) {
    ASSERT_TRUE(IsNumber("12738"));
    ASSERT_TRUE(IsNumber("-546456"));
    ASSERT_TRUE(IsNumber("0"));
    ASSERT_FALSE(IsNumber("one"));
}

TEST(SimpleCalcTestSuite, Sum) {
    int argc = 4;
    char* argv[] = {"SimpleCalc.exe", "10", "20", "+"}; 
    ASSERT_EQ(Calc(argc, argv), 30);
}

TEST(SimpleCalcTestSuite, Mult) {
    int argc = 4;
    char* argv[] = {"SimpleCalc.exe", "10", "20", "*"}; 
    ASSERT_EQ(Calc(argc, argv), 200);
}

TEST(SimpleCalcTestSuite, Diff) {
    int argc = 4;
    char* argv[] = {"SimpleCalc.exe", "10", "20", "-"}; 
    ASSERT_EQ(Calc(argc, argv), -10);
}

TEST(SimpleCalcTestSuite, Div) {
    int argc = 4;
    char* argv[] = {"SimpleCalc.exe", "10", "20", "/"}; 
    ASSERT_EQ(Calc(argc, argv), 0);
}
