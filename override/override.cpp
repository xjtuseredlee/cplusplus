//
// Created by redlee on 2020/3/22.
//
#include "iostream"

using namespace std;

class override {
public:
    static void print(float a) {
        cout << "float a is:" << a << endl;
    }

    static void print(double a) {
        cout << "double a is:" << a << endl;

    }

    static void print(int a) {
        cout << "int a is:" << a << endl;

    }

    static void print(string a) {
        cout << "string a is:" << a << endl;
    }

    static void print(char a[]) {
        cout << "string a is:" << a << endl;
    }
};

int main() {
    override o;

    o.print(1122);
    o.print(123.4);
    o.print(0.9923);
    o.print("hello");
    o.print("word");

    return 0;
}