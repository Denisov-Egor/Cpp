#include <iostream>

using namespace std;

int main()
{
    int max_animals = 100;
    int cows, calves, bull, total_animals;
    float head_cattle_cows;
    float price_cows, price_calves, price_bull, total_cost;
    float money = 100;

    cout << "Введите кол-во коров:";
    cin >> cows;

    cout << "Введите кол-во телят:";
    cin >> calves;

    cout << "Введите кол-во быков:";
    cin >> bull;

    total_animals = cows + calves + bull;

    price_cows = 5 * cows;
    price_calves = 0.5 * calves;
    price_bull = bull * 10;

    total_cost = price_cows + price_calves + price_bull;
    if (money == total_cost)
    {
        if (max_animals == total_animals)
        {
            cout << "куплено 100 голов скота";        
        }else{ttttttttt
            cout << "не куплено 100 голов скота";
        } 
    }
    

}