#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

template <class T, class U>
T operate(T a, U b, char d){
    T c;
    switch(d){
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;    
    }
    
    return c;

}


int main(int argc, char const *argv[]){
    int x = 3;
    float y = 4.3;
    char c = '+';
    
    cout <<  x << " " << c << " " << y << " = " << operate(x, y, c) << endl;
}