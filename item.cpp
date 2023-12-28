#pragma once

#include <windows.h>

#include "./coordinate.cpp"
#include "./drawable.cpp"

class Item : public IDrawable {
private:
    Coordinate _coordinate;

public:
    Item() { }

    void set_position(int, int);

    virtual void draw() override;

    // Getter properties
    Coordinate get_coordinate() { return this->_coordinate; }
};

void Item::set_position(int width, int height) {
    _coordinate.x = (rand() % (width - 2)) + 1;
    _coordinate.y = (rand() % (height - 2)) + 1;
}

void Item::draw() {
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), (COORD){ (short)_coordinate.x,(short)_coordinate.y } );
    putch('@');
}