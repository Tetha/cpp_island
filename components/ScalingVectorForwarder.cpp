#include "ScalingVectorForwarder.h"
#include "VectorProvidingComponent.h"

ScalingVectorForwarder::ScalingVectorForwarder(VectorProvidingComponent *scaledProvider) : scaledProvider(scaledProvider) {}

int ScalingVectorForwarder::getX() {
    return scaledProvider->getX() * factor;
}

int ScalingVectorForwarder::getY() {
    return scaledProvider->getY() * factor;
}
