---------------TUTORIAL WINDOWS------------------

- tutorial pt-br - https://www.youtube.com/watch?v=tkL9nPOEYLQ


1. instale o MSYS2 no windows (Link:https://www.msys2.org/)
2. abra o terminal e baixe o MinGW64 (comando: pacman -Syu comando2: pacman -S mingw-w64-x86_64-toolchain) e instale tudo

PS: adicione o MinGW no path na variavel do sistema - desse jeito (C:\msys64\mingw64\bin)

3. use esse codigo como pasta de exemplo
4. no visual code baixe as extensões oficiais de c/c++

com tudo certo cole esse codigo no main.cpp e compile

#include <iostream>

int main() {

    std::cout << "helllo world!";

    return 0;
}


se  tudo estiver certo vai aparecer isso no seu console:


helllo world!Pressione qualquer tecla para continuar. . .

---------------INSTALANDO BIBLIOTECAS-------------------

para instalar uma biblioteca voce precisa abrir a pasta do MSys e abrir o terminal de comando do MinGW

procure aqui a biblioteca que voce quer (https://packages.msys2.org/packages/)

caso não ache siga o tutorial no youtube na parte onde ele baixa o SFML diretamente do site - 21:55

caso baixe pelo Msys a biblioteca pode ser usada normalmente

PS: o codigo que eu coloquei aqui no github ja esta configurado para usar o SFML, caso queira testar copie e cole o codigo abaixo no main.cpp

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


agora divirta-se =)
