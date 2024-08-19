// cuadrado.cpp
#include "queprobar.cpp"
#include <gtest/gtest.h>
#include <iostream>

using namespace std;
 
TEST(TestRaizCuadrada, Positivos) { 
    ASSERT_EQ(6, raizCuadrada(36.0));
    ASSERT_EQ(18.0, raizCuadrada(324.0));
    ASSERT_EQ(25.4, raizCuadrada(645.16));
}
 
TEST(TestRaizCuadrada, Cero) {
    ASSERT_EQ(0, raizCuadrada(0.0));
}

TEST(TestRaizCuadrada, Negativos) {
    ASSERT_EQ(-1.0, raizCuadrada(-15.0));
    ASSERT_EQ(-1.0, raizCuadrada(-0.2));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
