include <SFML / Graphics.hpp>

#include <thread>
#include <chrono>

#include<iostream>

using namespace sf;
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "test!");

    Texture t;
    t.loadFromFile("/*texture directory*/");

    Sprite s(t);
    s.setScale(Vector2f(0.25f, 0.25f));

    float temp = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(Color::White);
        window.draw(s);
        window.display();

        s.move(Vector2f(temp, temp));


        for (int i = 0; i < 3; i++) {
            if (i == 0) {
                this_thread::sleep_for(chrono::milliseconds(1000));
                temp = 10;
            }
            else if (i == 1) {
                this_thread::sleep_for(chrono::milliseconds(1000));
                temp = 20;
            }
            else {
                this_thread::sleep_for(chrono::milliseconds(1000));
                temp = -10;
            }
        }
    }
    return 0;
}