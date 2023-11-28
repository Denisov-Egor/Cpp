#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b;
    cin>>b;
    char c;
    cin>>c;
    switch (c)
    {
        case '*':
        cout<<a*b;  
        break;
        case '/':
        if (b==0)
        {
            cout<<"На ноль делить нельзя!";
        }
        else
        {
            cout<<a/b;
        }
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        default:
        cout<<"Что нужно сделать с числами?";
    }
}