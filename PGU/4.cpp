#include <iostream>

using namespace std;

int main()
{
    float check;
    float Tip_Amount, Total_Amount, Percentage_tips ;
    int Service_level;

    cout << "Введите сумму счета: ";
    cin >> check; 
    cout << "Оцените уровень обслуживания от 1 до 5: ";
    cin >> Service_level;

    switch (Service_level)
    {
    case 1:
        Percentage_tips = 0.0;
        break;
    case 2:
        Percentage_tips = 0.05;
        break;
    case 3:
        Percentage_tips = 0.1;
        break;
    case 4:
        Percentage_tips = 0.15;
        break;
    case 5:
        Percentage_tips = 0.2;
        break;
    }

    Tip_Amount = check * Percentage_tips;
    Total_Amount = check + Tip_Amount;

    cout << "---" << endl;
    cout << "Ваш счет: " << check << " руб." << endl;
    cout << "Чаевые (" << (Percentage_tips * 100) << "%): " << Tip_Amount << " руб." << endl;
    cout << "Итого к оплате: " << Total_Amount << " руб." << endl;
}