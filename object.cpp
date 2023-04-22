#include "Object.h"
#include <iostream>
#include <cstdlib> // Добавлен заголовочный файл
#include <ctime>

Object::Object(int id, int x, int y) {
    this->id = id;
    this->x = x;
    this->y = y;
    this->path_length = 0;
}

void Object::moveRandom() {
    int dx = rand() % 3 - 1;
    int dy = rand() % 3 - 1;
    x += dx;
    y += dy;

    path[path_length][0] = x;
    path[path_length][1] = y;
    path_length++;
}

void Object::printPosition() {
    std::cout << "Object " << id << " is at (" << x << ", " << y << ")" << std::endl;
}

void Object::printPath() {
    std::cout << "Object " << id << " path:" << std::endl;
    for (int i = 0; i < path_length; i++) {
        std::cout << "(" << path[i][0] << ", " << path[i][1] << ") ";
    }
}
