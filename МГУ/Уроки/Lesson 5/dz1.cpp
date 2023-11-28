#include <iostream>
using namespace std;
int ABC(int Q)
{
float a, b;
a = Q/100;
b = a/1000;
cout << a << "м" <<endl;
cout << b << "км" <<endl;
}
int main()
{
int A;
cout << "Введите см:";
cin >> A;
ABC(A); return 0;
}

