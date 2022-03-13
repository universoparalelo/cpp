#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int n = 5;
    cout << n << endl;
    cout << &n << endl;
    int *ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;
    *ptr = 10;
    cout << *ptr << endl;
    cout << n << endl;
    cout << ptr << endl;
    /*int n = 5;
    cout << n << endl;
    int ptr = n;
    cout << ptr << endl;
    ptr = 10;
    cout << ptr << endl;
    cout << n << endl;*/

    int v;
    int *ptr2 = &v;
    *ptr2 = 7;
    cout << "v=" << v << endl;

    system("pause");
    return 0;
}