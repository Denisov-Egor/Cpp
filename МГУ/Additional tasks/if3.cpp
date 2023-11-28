#include <iostream>
using namespace std;

int main() 
{
	int a;
	cout << "Введите a: ";
	cin >> a;
	if(a > 0)
    { 
	    a = a + 1;
    }
    if(a < 0)
    {
        a = a - 2;
    }
    if(a == 0)
    {
        a = 10;
    }
	cout << "a = " << a;
	return 0;
}