//
// Created by redlee on 2020/3/21.
//
//指针学习，重要的内容。

#include "iostream"

using namespace std;

const int MAX = 4;
const int VALUES_NUM = 7;

int main() {

    int value = 20;
    int *index;

    cout << "address of value is:" << &value << endl;
    index = &value;
    cout << "value of index is:" << *index << endl;

    //数组实现
    int num[MAX] = {2, 4, 3, 1};
    for (int i = 0; i < MAX; i++) {
        cout << "value num[" << i << "]:";
        cout << num[i] << endl;
    }

    //指针实现
    int values[VALUES_NUM] = {12, 23, 34, 45, 56, 67, 78};

    int *point[VALUES_NUM];

    //把数组的值得指针放在指针数组中
    for (int i = 0; i < VALUES_NUM; i++) {
        point[i] = &values[i];
    }

    for (int j = 0; j < VALUES_NUM; j++) {
        cout << "value of values[" << j << "] is:";
        cout << *point[j] << endl;
    }

    string array[] = {"aa", "dd", "dd", "ss"};

    string *arr[4];

    //字符串数组
    for (int i = 0; i < 4; i++) {
        arr[i] = &array[i];
    }

    for (int j = 0; j < 4; j++) {
        cout << ".....value of array[" << j << "] is:";
        cout << *arr[j] << endl;
    }

}
