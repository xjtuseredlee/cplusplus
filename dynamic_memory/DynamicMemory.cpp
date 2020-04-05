//
// Created by redlee on 2020/3/21.
//
#include "iostream"

using namespace std;

unsigned int xx() {

}

int main() {

    float *pvalue = NULL;
    pvalue = new float;
    *pvalue = 12332.2;
    cout << "value is:" << *pvalue;
    delete pvalue;//释放内存

    //一维数组
    int *array = new int[4];
    delete[]array;

    //二维数组分配内存
    int **array2;
    array2 = new int *[2];
    for (int i = 0; i < 2; i++) {
        array2[i] = new int [4];
    }
    //二维数组释放内存


    return 0;
}

