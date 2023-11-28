#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int max;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    if (a < b)
    {
        max = b;
    }
    else
    {
        max = a;
    }
    if (b == a)
    {
       a = (b = 0);
    }
    else
    {
        a = max;
        b = max;
    }
	cout << a << endl;	
	cout << b;	

	return 0;
}