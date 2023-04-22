
#include "Coordinates.h"
#include <cmath>

Coordinates::Coordinates(int x, int y) {
this->x = x;
this->y = y;
}

int Coordinates::getX() const {
return x;
}

int Coordinates::getY() const {
return y;
}

void Coordinates::setX(int x) {
this->x = x;
}

void Coordinates::setY(int y) {
this->y = y;
}

double Coordinates::distanceTo(const Coordinates& other) const {
int dx = x - other.getX();
int dy = y - other.getY();
return sqrt(dx * dx + dy * dy);
}

