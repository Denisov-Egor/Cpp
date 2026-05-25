#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int kolvo = 0, mas[10][10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
                mas[i][j] = rand();

        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (mas[i][j] % 2 != 0)
            {
                kolvo++;
            }
        }
    }
    cout << "Количество нечётных столбцов равно " << kolvo << endl;
    return 0;
}