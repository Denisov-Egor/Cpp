#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;

    cout << a * 100 + b * 10 + c << endl;
    cout << a * 100 + c * 10 + b << endl;

    
    cout << b * 100 + a * 10 + c << endl;
    cout << b * 100 + c * 10 + a << endl;

    
    cout << c * 100 + a * 10 + b << endl;
    cout << c * 100 + b * 10 + a << endl;

    
}