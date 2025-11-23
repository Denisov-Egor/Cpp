#include <iostream>

using namespace std;

int main()
{
    for (int bull = 0; bull <= 10; bull++)
    {
        for (int cow = 0; cow <= 20; cow++)
        {
            int calves = 100 - bull - cow;
            if (calves >= 0 && 10 * bull + 5 * cow + 0.5 * calves == 100) 
            {
                cout << "Быков: " << bull << ", Коров: " << cow << ", Телят: " << calves;
            }
        }
        
    }
       
}
