//
// Created by redlee on 2020/3/22.
//
#include "iostream"

using namespace std;

class Animal {

protected:
    int age{};
    int height{};
public:
    virtual float getPer() = 0;

    void setAge(int a) {
        age = a;
    }

    void setHeight(int h) {
        height = h;
    }
};

class Cat : public Animal {
public:
    float getPer() override {
        return age / height;
    }
};

class Dog : public Animal {
public:
    float getPer() override {
        return age / height * 2;
    }
};

int main() {

    Dog dog;
    Cat cat;

    dog.setAge(13);
    dog.setHeight(13);

    cout << "dog per is:" << dog.getPer() << endl;

    cat.setHeight(13);
    cat.setAge(13);

    cout << "cat per is:" << cat.getPer() << endl;

    return 0;
}