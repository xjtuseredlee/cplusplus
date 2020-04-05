//
// Created by redlee on 2020/3/22.
//

#include "iostream"

using namespace std;

int main() {

    char flag;
    float num01;
    float num02;

    cout << "please input + - * /:";
    cin >> flag;
    cout << "please input two number:";
    cin >> num01 >> num02;
    if (num02 == 0) {
        throw exception();
    }
    switch (flag) {
        case '+':
            cout << num01 + num02;
            break;
        case '-':
            cout << num01 - num02;
            break;
        case '*':
            cout << num01 * num02;
            break;
        case '/':
            cout << num01 / num02;
            break;
        default:
            cout << "input is error,please check!";
            break;
    }
    return 0;
}
