#ifndef COORDINATES_H
#define COORDINATES_H

class Coordinates {
private:
int x;
int y;
public:
Coordinates(int x, int y);
int getX() const;
int getY() const;
void setX(int x);
void setY(int y);
double distanceTo(const Coordinates& other) const;
};

#endif