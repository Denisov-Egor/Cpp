#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string sentence;
    string firstWord;
    
    cout << "Введите предложение (должно заканчиваться точкой): ";
    getline(cin, sentence);

    if (sentence.back() != '.') 
    {
        cout << "Ошибка: предложение должно заканчиваться точкой!" << endl;
        return 1;
    }

    sentence.pop_back();

    size_t spacePos = sentence.find(' ');
    
    if (spacePos != string::npos) 
    {
        firstWord = sentence.substr(0, spacePos);
    } else {
        firstWord = sentence;
    }

    cout << "Первое слово: " << firstWord << endl;
}