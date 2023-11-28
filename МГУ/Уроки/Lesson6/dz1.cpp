#include <iostream>

using namespace std;

int main()
{
    int row = 5;
    int col = 5;
    int sumB_1 = 0, sumB_2 = 0, sumB_3 = 0;
    int mass[row][col]; 

    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Введите число " << i << ", " << j << endl;
            cin >> mass[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < row; i++) {
        sumB_1 += mass[i][i];
        sumB_2 += mass[row - i-1][i];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {

            if ((i != j) && (j != (row - i - 1)) )
            {
                sumB_3 += mass[i][j];
            }
        }
    }
 
    cout << "Сумма главной диагонали " << sumB_1<< endl;
    cout << "Сумма побочной диагонали " << sumB_2<< endl;
    cout << "Сумма остальных чисел " << sumB_3<< endl;
    
}