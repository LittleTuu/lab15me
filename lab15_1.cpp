#include <iostream>
using namespace std;

int main(){
    int a = 5;
    char b = 'A';
    char &c = b;
    int *x = &a;
    char *y = &b;
    int **z = &x;

    auto printValues = [&]() {
        cout << a << " " << b << " " << c << " " << x << " " << (void*)y << " " << z << endl;
    };
    printValues();
    cout << &a << " " << (void*)&b << " " << (void*)&c << " " << &x << " " << &y << " " << &z << endl;
    c = 'F';
    printValues();
    *y = 'W';
    printValues();
    *x = 6;
    printValues();
    **z = 7;
    printValues();

	return 0;
}
