#include "UserEquipment.h"
#include <cstdlib> 

UserEquipment::UserEquipment(int id, int x, int y) : Object(id, x, y) {}

void UserEquipment::moveRandom() {
    int dx = rand() % 3 - 1;
    int dy = rand() % 3 - 1;
    position.setX(position.getX() + dx);
    position.setY(position.getY() + dy);

    path[path_length][0] = position.getX();
    path[path_length][1] = position.getY();
    path_length++;
}

void UserEquipment::convertToGeographicCoordinates() {
    double latitude; // Объявите переменную здесь
    double longitude; // Объявите переменную здесь

    const double minLatitude = 54.758872; // Минимальная широта
    const double maxLatitude = 55.106727; // Максимальная широта
    const double minLongitude = 82.753928; // Минимальная долгота
    const double maxLongitude = 83.209037; // Максимальная долгота

    // Преобразование системы координат
    double x = position.getX();
    double y = position.getY();

    double normalizedX = (x - minLongitude) / (maxLongitude - minLongitude);
    double normalizedY = (y - minLatitude) / (maxLatitude - minLatitude);

    latitude = minLatitude + normalizedY * (maxLatitude - minLatitude);
    longitude = minLongitude + normalizedX * (maxLongitude - minLongitude);
}