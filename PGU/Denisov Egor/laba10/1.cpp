#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    int count = 0;

    cout << "Введите строку: ";
    getline(cin, str);

    for (char c : str) 
    {
        if (c >= '0' && c <= '9') 
        {
            count++;
        }
    }

    cout << "Количество цифр в строке: " << count << endl;
}