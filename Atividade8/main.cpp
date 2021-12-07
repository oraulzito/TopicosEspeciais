#include <iostream>
#include "Par.h"

using namespace std;


template<typename T>
T calcArray(const T *array, int count) {
    T result = array[0];

    for (int i = 1; i < count; i++)
        result += array[i];

    return result;
}

int main() {
    const int ACOUNT = 5;
    const int BCOUNT = 7;
    const int CCOUNT = 6;

    int a[ACOUNT] = {1, 2, 3, 4, 5};
    double b[BCOUNT] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    string c[CCOUNT] = {"Hello ", "World"};

    cout << "\nCalc Array" << endl;
    cout << calcArray<int>(a, ACOUNT) << endl;
    cout << calcArray<double>(b, BCOUNT) << endl;
    cout << calcArray<string>(c, CCOUNT) << endl;

    cout << "\nPar 1" << endl;
    Par<string, int> par1("Isso é uma string", 1);
    par1.primeiro();
    par1.segundo();

    cout << "\nPar 2" << endl;
    Par<double, char> par2(2.5, 'c');
    par2.primeiro();
    par2.segundo();

    return 0;
}
