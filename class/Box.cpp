//
// Created by redlee on 2020/3/21.
//

#include "Box.h"
#include "iostream"

using namespace std;

int main() {

    Box box1;
    Box box2;
    double volume=0.0;

    //init box
    box1.length = 20;
    box1.breadth = 12;
    box1.height = 12;

    box2.length = 12;
    box2.breadth = 13;
    box2.height = 10;


    volume = box1.length * box1.breadth * box1.height ;
    cout << "volume od box1 is:" << volume << endl;

    volume = box2.length * box2.breadth * box2.height ;
    cout << "volume od box2 is:" << volume << endl;

    return 0;
};