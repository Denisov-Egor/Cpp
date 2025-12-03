#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	string s;
	int result = 0;
	char a = ',';
	cout << "Введите строку";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == a)
			result++;
	}
	cout << "Количество запятых в предложении равно " << result << endl;
	return 0;
}