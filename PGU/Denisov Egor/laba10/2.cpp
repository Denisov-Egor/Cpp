#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string sentence;
    
    cout << "Введите предложение (должно заканчиваться точкой): ";
    getline(cin, sentence);

    sentence.pop_back();

    size_t spacePos = sentence.find(' ');
    string firstWord;

    if (spacePos != string::npos) 
    {
        firstWord = sentence.substr(0, spacePos);
    } else {
        firstWord = sentence; 
    }

    cout << "Первое слово: " << firstWord << endl;
}