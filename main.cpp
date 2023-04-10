#include "Object.h"

int main() {
    srand(time(NULL));

    Object obj(1, 500, 500);

    for (int i = 0; i < 100; i++) {
        obj.moveRandom();
        obj.printPosition();
    }

    obj.printPath();

    return 0;
}
