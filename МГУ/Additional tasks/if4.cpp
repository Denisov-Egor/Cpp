#include <iostream>
using namespace std;

int main()
{
    int a, b, c, K;
    K = 0;
    cout << "Введите a: ";
	cin >> a;
    cout << "Введите b: ";
	cin >> b;
    cout << "Введите c: ";
	cin >> c;
    if(a > 0)
{ 
        K = K +1;
}
    if(b > 0)
{ 
        K = K +1;
}
    if(c > 0)
{ 
        K = K +1;
}
cout << "K = " << K;
return 0;
}