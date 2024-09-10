#include<SFML/Graphics.hpp>


int main() {


	sf::RenderWindow window(sf::VideoMode(1368, 768), "SFML works");
	/*sf::CircleShape shape(200.0f);*/
    sf::RectangleShape recshape(sf::Vector2f(120.f, 50.0f));

    recshape.setSize(sf::Vector2f(100.0f, 100.0f));
	recshape.setFillColor(sf::Color::Red);


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(recshape);
        window.display();
    }



    return 0;

}