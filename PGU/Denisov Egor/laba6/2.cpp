#include <iostream>

using namespace std;

int main()
{
    int max_animals = 100;
    int cows, calves, bull;
    int choice;
    

    float head_cattle_cows;
    float price_cows, price_calves, price_bull;
    float money = 100;

    cout << "Введите кол-во коров:";
    cin >> cows;

    cout << "Введите кол-во телят:";
    cin >> calves;

    cout << "Введите кол-во быков:";
    cin >> bull;

    switch (choice)
    {
    case 1:
        float total_cost = bull * price_bull + cows * price_cows + calves * price_calves;
        int total_animals = bull + cows + calves;

        cout << "Результат проверки:" << endl;
        cout << "Количество животных: " << total_animals << endl;
        cout << "Общая стоимость: " << total_cost << " руб." << endl;

        if (total_animals == max_animals && total_cost == money)
        {
            cout << "Условия выполнены!" << endl;
        } else {
                cout << "Условия НЕ выполнены!" << endl;
        }
        if (total_animals != max_animals) 
        {
            cout << "- Неправильное количество животных (нужно 100)" << endl;
        }
        if (total_cost != money) 
        {
            cout << "- Неправильная стоимость (нужно 100 руб.)" << endl;
        }
        break;
    }
}