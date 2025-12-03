#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int x, y, z, k;
	cout << "Введите x";
	cin >> x;
	cout << "Введите y";
	cin >> y;
	cout << "Введите z";
	cin >> z;
	int p;
	float s;
	float u1;
	float u2;
	float u3;
	if (x + y > z || x + z > y || z + y > x)
	{
		cout << "Введите k";
		cin >> k;
		switch (k)
		{
		case 1:
			p = x + y + z;
			cout << "Перитметр равен " << p << endl;
			break;
		case 2:
			s = sqrt(p * (p - x) * (p - y) * (p * z));
			cout << "Площадь равна " << s;
			break;
		case 3:
			u1 = (pow(x, 2) + pow(y, 2) - pow(z, 2)) / 2 * y * z;
			cout << "Угол между x и y равен " << cos(u1);
			break;
		case 4:
			u2 = (pow(y, 2) + pow(z, 2) - pow(x, 2)) / 2 * z * x;
			cout << "Угол между y и z равен " << cos(u2);
			break;
		default:
			u3 = (pow(z, 2) + pow(x, 2) - pow(y, 2)) / 2 * x * y;
			cout << "Угол между x и z равен " << cos(u3);
			break;
		}
	}
	else
	{
		cout << "Данный треугольник не может существовать";
	}
	return 0;

}