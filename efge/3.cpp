#include <iostream>

using namespace std;

int main()
{
    int arr[5];

    cout << sizeof(arr)/sizeof(int);

    for (int i = 0; i < sizeof(arr); i++)
    {
        cout << arr[i];
    }
    

}