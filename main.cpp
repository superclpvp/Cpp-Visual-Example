#include <SFML/Graphics.hpp>

int main() {
    // Criando a janela (largura, altura, título)
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML 2 - Janela");

    // Criando um círculo vermelho
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(375, 275); // Centralizando na tela

    // Loop principal do jogo
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Limpa a tela
        window.clear(sf::Color::Black);
        
        // Desenha o círculo
        window.draw(circle);
        
        // Atualiza a tela
        window.display();
    }

    return 0;
}