#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите натуральное число n: ";
    cin >> n;
    
    long long total_sum = 0;
    
    for (int i = 1; i <= n; i++) 
    {
        long long term = 1;
        for (int j = 0; j < i; j++) {
            term *= i;
        }
        total_sum += term;
    }
    
    cout << "Сумма S = " << total_sum << endl;
    
}