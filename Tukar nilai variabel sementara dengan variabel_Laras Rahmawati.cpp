#include<iostream>
using namespace std;
int main (){
    int a = 12, b = 16, temp;
    cout << " NILAI AWAL A= "  << a << " B= " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << " NILAI SETELAH DITUKAR A= " << a << " B= " << b << endl;
    cout << endl;
    return 0;
}
