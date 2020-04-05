//
// Created by redlee on 2020/3/21.
//
#include "iostream"

using namespace std;

int main() {
    double x = 3.0;
    float y = 3.0;
    string str = "hello";

    double& a = x;
    float& b = y;
    string& c = str;


    std::cout << "Factorial of " << x << " is " << std::endl;
    std::cout << "Factorial of " << y << " is " << std::endl;
    std::cout << "Factorial of " << str << " is " << std::endl;

    std::cout << "Factorial of " << a << " is " << std::endl;
    std::cout << "Factorial of " << b << " is " << std::endl;
    std::cout << "Factorial of " << c << " is " << std::endl;

    return 0;
}
