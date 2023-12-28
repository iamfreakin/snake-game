#pragma once

#include <iostream>
#include <deque>
#include <windows.h>

#include "./coordinate.cpp"
#include "./directions.cpp"
#include "./drawable.cpp"

using namespace std;

class Snake : public IDrawable {
private: 
    bool _isGrown;
    deque<Coordinate> _coordinates;

public:
    Snake(int width, int height) {
        width /= 2;
        height /= 2;

        _coordinates.push_back({ width,height });

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){ (short)width,(short)height } );
        putch('O');

        _isGrown = false;
    }
    
    void move(char);
    void grow();
    bool is_collision();
    bool is_collision(Coordinate);

    virtual void draw() override;

    // Getter proerties
    Coordinate get_head() { return this->_coordinates.front(); }
};

void Snake::grow() {
    _isGrown = true;
}

bool Snake::is_collision() {
    for (int i = 1; i < _coordinates.size(); i++) {
        if(_coordinates.front().x == _coordinates[i].x && _coordinates.front().y == _coordinates[i].y) {
            return true;
        }
    }

    return false;
}

bool Snake::is_collision(Coordinate coordinate) {
    for (int i = 0; i < _coordinates.size(); i++) {
        if(_coordinates[i].x == coordinate.x && _coordinates[i].y == coordinate.y) {
            return true;
        }
    }
    
    return false;
}

void Snake::draw() {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){ (short)(_coordinates[0].x),(short)(_coordinates[0].y) } );
    putch('O');

    if (_coordinates.size() > 0) {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){ (short)(_coordinates[1].x),(short)(_coordinates[1].y) } );
        putch('o');
    }

    if (_isGrown == false) {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){ (short)(_coordinates.back().x),(short)(_coordinates.back().y) } );
        putch(' ');

        _coordinates.pop_back();
    }
    
    _isGrown = false;
}

void Snake::move(char inputKey) {
    Coordinate copy = *_coordinates.begin();

    switch (inputKey) {
        case Directions::Left:
            copy.x--;
            break;
        case Directions::Right:
            copy.x++;
            break;
        case Directions::Up:
            copy.y--;
            break;
        case Directions::Down:
            copy.y++;
            break;
    }

    _coordinates.push_front(copy);
}