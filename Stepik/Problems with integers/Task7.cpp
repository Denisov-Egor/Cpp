// В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами. 
// За каждой партой может сидеть два учащихся.
// Известно количество учащихся в каждом из трех классов.
// Выведите наименьшее число парт, которое нужно приобрести для них. 
// Каждый класс сидит в своем кабинете.

#include <iostream>
using namespace std;

int main() {
    int class1, class2, class3;
    
    cout << "Введите количество учащихся в трех классах: ";
    cin >> class1 >> class2 >> class3;

    int desks1 = class1 / 2;
    if (class1 % 2 != 0) {
        desks1++;
    }
    
    int desks2 = class2 / 2;
    if (class2 % 2 != 0) {
        desks2++;
    }
    
    int desks3 = class3 / 2;
    if (class3 % 2 != 0) {
        desks3++;
    }

    int total_desks = desks1 + desks2 + desks3;
    
    cout << "Наименьшее число парт, которое нужно приобрести: " << total_desks << endl;
    
    return 0;
}