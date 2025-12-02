#include <iostream>

using namespace std;

int main() 
{
    int S;
    cout << "Введите сумму S: ";
    cin >> S;

    int denominations[] = {5000, 1000, 500, 100, 50, 10};
    int count[6] = {0}; 
    
    for (int i = 0; i < 6; i++) {
        count[i] = S / denominations[i]; 
        S = S % denominations[i];        
    }

    cout << "\nКоличество купюр каждого достоинства:\n";
    cout << "5000 руб: " << count[0] << endl;
    cout << "1000 руб: " << count[1] << endl;
    cout << "500 руб: " << count[2] << endl;
    cout << "100 руб: " << count[3] << endl;
    cout << "50 руб: " << count[4] << endl;
    cout << "10 руб: " << count[5] << endl;

}