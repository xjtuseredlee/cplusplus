//
// Created by redlee on 2020/3/21.
//C++ 实例 - 实现两个数相加
// c++ program to find factorial of given number.
/**
 * 计算阶乘
 * 知识点：
 * 1. << 为连接符；
 * 2. unsigned 指的是无符号的；
 * 3. std::cout 是输入的；std::endl是结尾。
 */
#include "iostream"

unsigned int factorial(unsigned int num) {

    if (0 == num) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int num = 0;

    std::cout << "Factorial of" << num << " is " << factorial(num) << std::endl;
    return 0;
}

