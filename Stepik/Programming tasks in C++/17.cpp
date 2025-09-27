#include <iostream>
using namespace std;

int main() {
    int number;

    cin >> number;

    if (number < 10000 || number > 99999) {
        return 1;
    }

    int reversedNumber = 0;
    int temp = number;
    
    while (temp > 0) {
        int digit = temp % 10;
        reversedNumber = reversedNumber * 10 + digit;  
        temp /= 10;
    }

    cout << reversedNumber << endl;
} 