//
// Created by redlee on 2020/3/22.
//
#include "iostream"

using namespace std;

#ifndef ALGORITHM_SHAPE_H
#define ALGORITHM_SHAPE_H


class Shape {
protected:
    int height;
    int weith;

public:
    void setHeight(int h) {
        height = h;
    }

    void setWeith(int w) {
        weith = w;
    }
};

class Rectangle : public Shape {
public:
    int getArea() {
        return height * weith;
    }
};

#endif //ALGORITHM_SHAPE_H

int main() {

    Rectangle rectangle;
    rectangle.setHeight(2);
    rectangle.setWeith(4);

    cout << "area is:" << rectangle.getArea();
}