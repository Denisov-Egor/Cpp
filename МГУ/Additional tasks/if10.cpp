#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;
    if(a != b)
		a = (b = a + b);
	else
		a = (b = 0);

	cout << a;	
	cout << b;	

	return 0;
}