#include <iostream>
using namespace std;

int main() 
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE], n, x, min_val, last_index = -1;
    
    do {
        cout << "Введите n (1-" << MAX_SIZE << "): ";
        cin >> n;
    } while (n < 1 || n > MAX_SIZE);
    
    cout << "Введите элементы:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "Введите x: ";
    cin >> x;
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < x && (last_index == -1 || arr[i] <= min_val)) {
            min_val = arr[i];
            last_index = i;
        }
    }
    
    if (last_index == -1) 
    {
        cout << "Нет элементов меньше " << x << endl;
    } else {
        cout << "Позиция: " << last_index + 1 << ", значение: " << arr[last_index] << endl;
    }
}