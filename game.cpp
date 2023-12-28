#pragma once

#include <iostream>
#include <conio.h>

#include "./map.cpp"
#include "./item.cpp"
#include "./snake.cpp"

class Game {
private:
    const char Exit = 'x';

    Map* _map;
    Item* _item;
    Snake* _snake;

public:
    Game() {
        _map = new Map;
        _item = nullptr;
        _snake = nullptr;
    }

    ~Game() { delete _map; }

    void start();
    bool is_collision_to_wall();
    void hide_cursor();
};

void Game::start() {
    hide_cursor();

    // Draw map on command console
    _map->print();
    
    // Initialize snake instance
    _snake = new Snake(_map->get_width(), _map->get_height());

    char inputKey;

    // Input system
    while (true) {
        if (_kbhit()) {
            inputKey = (char)_getch();

            if (inputKey == Exit) break;
        }

        if (_item == nullptr) {
            _item = new Item();

            do {
                _item->set_position(_map->get_width(), _map->get_height());
            } while (_snake->is_collision(_item->get_coordinate()));

            _item->draw();
        }

        if (_snake ->is_collision(_item->get_coordinate())) {
            _snake->grow();

            delete _item;
            _item = nullptr;
        }

        _snake->move(inputKey);
        _snake->draw();

        if(is_collision_to_wall()) break;
        if(_snake->is_collision()) break;
        
        Sleep(300);
    }

    delete _snake;
    delete _item;
    delete _map;
}

bool Game::is_collision_to_wall() {
    bool a = _snake->get_head().x < 1 || _snake->get_head().x > (_map->get_width() - 2);
    bool b = _snake->get_head().y < 1 || _snake->get_head().y > (_map->get_height() - 2);

    if (a) return true;
    if (b) return true;

    return false;
}

void Game::hide_cursor() {
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1;
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}