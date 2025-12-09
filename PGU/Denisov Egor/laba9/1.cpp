#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    const int N = 10;
    int arr[N][N];
    int zeroCount = 0;
    
    srand(time(NULL));

    cout << "Созданный массив 10x10:" << endl;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            arr[i][j] = rand() % 21 - 10;
            cout << arr[i][j] << "\t";
            if (arr[i][j] == 0) zeroCount++;
        }
        cout << endl;
    }
    
    cout << "\nКоличество нулевых элементов: " << zeroCount << endl;
}