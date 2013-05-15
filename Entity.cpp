#include "Entity.h"
#include <assert.h>

Entity::Entity() : precisePosition(0), precisePositionContainer(0) {}

const bool Entity::hasPrecisePositionComponent() {
    return precisePosition != 0;
}

const VectorProvidingComponent *Entity::getPrecisePositionComponent() {
    assert(precisePosition != 0);
    return precisePosition;
}

const bool Entity::hasPrecisePositionContainer() {
    return precisePositionContainer != 0;
}

const MutableVectorContainer *Entity::getPrecisePositionContainer() {
    assert(precisePositionContainer != 0);
    return precisePositionContainer;
}
