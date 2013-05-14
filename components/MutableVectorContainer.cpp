#include "MutableVectorContainer.h"

MutableVectorContainer::MutableVectorContainer() : x(0), y(0) {}

void MutableVectorContainer::setVector(int x, int y) {
    this->x = x;
    this->y = y;
}

int MutableVectorContainer::getX() {
    return x;
}

int MutableVectorContainer::getY() {
    return y;
}
