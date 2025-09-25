#include <iostream>
using namespace std;

int main() {
    int number;
    
    cin >> number;

    int first_half = number / 100;    
    int second_half = number % 100;   

    cout << first_half << " " << second_half << endl;
}