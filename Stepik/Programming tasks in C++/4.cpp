#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int a, b, c, d;

    cout << "Введите четыре целых числа a, b, c, d: ";
    cin >> a >> b >> c >> d;

    int expr1 = pow(a + b, 3);      
    int expr2 = pow(c - d, 4);     

    int expr3 = pow(a + 2*a*b + b, 2);          
    int expr4 = pow(c - 3*c*d*d + 5, 2);     
    int expr5 = 6 * pow(b*b - 4*a*c, 2);        

    cout << expr1 << " " << expr2 << endl;
    cout << expr3 << " " << expr4 << " " << expr5 << endl;
}