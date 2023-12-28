#include <iostream>

#include "./game.cpp"

int main() {
    system("cls");

    // Initialize game instance
    Game* game = new Game;
    game->start();

    // Game over system
    system("cls");
    std::cout << "Game Over!\n";
    std::cout << "Press x button\n";

    delete game;
    
    return 0;
}
