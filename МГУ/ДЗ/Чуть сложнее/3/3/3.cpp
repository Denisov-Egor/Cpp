#include <iostream>
#include <string>
using namespace std;

int main()
{

	string input_string = "Привет, мир!";
	string replace_dict = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	string output_string = "";

	for (int i = 0; i < input_string.size(); i++)
	{

		char current_char = input_string[i];
		if ((current_char >= 'a' and current_char <= 'z') or (current_char >= 'A' and current_char <= 'Z'))
		{

			int letter_length = 0;

			for (int j = i + 1; j < input_string.size() and ((input_string[j] >= 'a' and input_string[j] <= 'z') or (input_string[j] >= 'A' and input_string[j] <= 'Z')); j++)
			{

				letter_length++;
			}

			char replace_char = replace_dict[letter_length];
			output_string += replace_char;

		}
		else
		{

			output_string += current_char;
		}

	}

	cout << output_string;

	return 0;
}