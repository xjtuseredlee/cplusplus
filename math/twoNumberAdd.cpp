#include <iostream>

using namespace std;

unsigned int twoNumberAdd(unsigned int firstNumber, unsigned int secondNumber) {

    int sumOfTwoNumber;
    sumOfTwoNumber = firstNumber + secondNumber;
    return sumOfTwoNumber;
}

int main() {
    int firstNumber, secondNumber;
    cout << "请输入两个整数：";
    cin >> firstNumber >> secondNumber;

    cout << firstNumber << "+" << secondNumber << "=" << twoNumberAdd(firstNumber, secondNumber);

}