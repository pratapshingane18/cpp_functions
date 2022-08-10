#include<iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3};
    int *p = a;
    cout << sizeof(a)  << endl;
    cout << sizeof(p)  << endl;
    cout << *(a+2) << endl;
    cout << p[2] << endl;
    return 0;
}

