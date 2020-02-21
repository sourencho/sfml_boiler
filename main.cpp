#include <SFML/Graphics.hpp>

int main(int, char const**) {
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // Window
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60);
    window.setTitle("shader");

    // Start the game loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed &&
                    event.key.code == sf::Keyboard::Escape
               ) {
                window.close();
            }

            // Handle game controller events
        }

        // Display
        window.clear(sf::Color::Black);

        // Draw
        sf::CircleShape circle;
        circle.setRadius(50.f);
        circle.setOrigin(circle.getRadius(), circle.getRadius());
        circle.setPosition(sf::Vector2f(window.getSize()) / 2.f);
        circle.setFillColor(sf::Color::White);

        window.draw(circle);

        window.display();
    }

    return EXIT_SUCCESS;
}
