#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int n_min, min;
    const int SIZE = 10;
    int arr[SIZE];

    bool alreadyThere;
     
    srand(time(NULL));
    
    for (int i = 0; i < SIZE;)
    {
        alreadyThere = false;
        int newRandomValue = rand() % 20;
        
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                alreadyThere = true;
                break;
            }
        }
        
        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }
        
    }

    n_min = 0;
    for (int i = 0; i < SIZE;i++)
    {
        cout << arr[i] << endl;
        if (arr[i] <= min)
        {
            min = arr[i];
            n_min = i;
        }
    }
    cout << "Минимальный элемент массива: " << min << endl;
    cout << "Номер минимального элемента массива: " << n_min << endl;
}