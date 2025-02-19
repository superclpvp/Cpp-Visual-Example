---------------WINDOWS TUTORIAL------------------
Tutorial in Portuguese - https://www.youtube.com/watch?v=tkL9nPOEYLQ

1️⃣ Install MSYS2 on Windows (Link: https://www.msys2.org/)
2️⃣ Open the terminal and install MinGW64 with the following commands:

pacman -Syu
pacman -S mingw-w64-x86_64-toolchain
Install everything.

📌 Important: Add MinGW to the system PATH variable like this:


C:\msys64\mingw64\bin
✅ Use this folder as an example
✅ In Visual Studio Code, install the official C/C++ extensions
✅ Once everything is set up, copy and paste this code into main.cpp and compile:

#include <iostream>

int main() {
    std::cout << "hello world!";
    return 0;
}
If everything is correct, the following will appear in your console:

hello world! Press any key to continue...
---------------INSTALLING LIBRARIES-------------------
To install a library, follow these steps:
1️⃣ Open the MSys folder and launch the MinGW command terminal.
2️⃣ Search for the library you want here: https://packages.msys2.org/packages/

📌 If you can’t find it, follow the tutorial at 21:55, where it shows how to download SFML directly from the website.

📌 If installed via MSYS2, the library should work normally.

✅ The code in this GitHub repository is already configured to use SFML.
✅ If you want to test it, copy and paste the following code into main.cpp:

#include <SFML/Graphics.hpp>

int main() {  
    // Creating a window (width, height, title)
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML 2 - Window");

    // Creating a red circle
    sf::CircleShape circle(50);
    circle.setFillColor(sf::Color::Red);
    circle.setPosition(375, 275); // Centering on the screen

    // Main game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the screen
        window.clear(sf::Color::Black);

        // Draw the circle
        window.draw(circle);

        // Update the screen
        window.display();
    }

    return 0;
}
Now, have fun! 😃🎮
