#ifndef OBJECT_H
#define OBJECT_H

class Object {
private:
    int id;
    int x;
    int y;
    int path[1000][2];
    int path_length;
public:
    Object(int id, int x, int y);
    void moveRandom();
    void printPosition();
    void printPath();
};

#endif
