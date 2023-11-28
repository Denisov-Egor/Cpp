#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
	RenderWindow window(VideoMode(640, 480), "SFML works!");
	CircleShape c(100, 6);
	c.setOrigin(50, 50);
	c.setPosition(320, 240);
	while (window.isOpen())
	{
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
		}
		window.clear(Color::Green);
		window.draw(c);
		window.display();
		ContextSettings settings;
	}
	return 0;
}


#include <iostream>
#include <deque>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	deque<int> d;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		int r = rand() % 101;
		d.push_back(r);
	}
	int sum = 0;
	for (int i = 0; i < d.size(); i++) {
		sum += d[i];
	}
	float avg = (float)sum / d.size();
	cout << "Среднее арифметическое: " << avg << endl;
	return 0;
}