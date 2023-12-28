#include <iostream>

#pragma once

class Map {
private:
    int _width;
    int _height;
    char** _map;

    /// @brief Initialize map border
    void initialize();

public:
    Map(const int width = 25, const int height = 25) : _width(width), _height(height) {
        _map = new char*[_height];
        for(int i = 0; i <_height; i++) {
            _map[i] = new char[_width];
        }

        initialize();
    }

    ~Map() {
        for(int i=0; i < _height; i++) {
            delete[] _map[i];
        }

        delete[] _map;
    }

    /// @brief Print map to command console
    void print();

    // Getter properties
    int get_width() { return this->_width; }
    int get_height() { return this->_height; }
};

void Map::initialize() {
    for (int i = 0; i < _width; i++){
        _map[0][i] = '#';
        _map[_height - 1][i] = '#';
    }
    
    for (int i = 0; i < _height; i++){
        _map[i][0] = '#';
        _map[i][_width - 1] = '#';
    }

    for (int i = 1; i < _height - 1; i++){
        for (int j = 1; j < _width - 1; j++){
            _map[i][j] = ' ';
        }
    }
    
}

void Map::print() {
    for (int i = 0; i < _height; i++){
        for (int j = 0; j < _width; j++){
            std::cout << _map[i][j];
        }
        std::cout << '\n';
    }
}