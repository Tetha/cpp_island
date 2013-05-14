#include "VectorProvidingComponent.h"

#ifndef INCLUDED_SCALING_VECTOR_FORWARDER
#define INCLUDED_SCALING_VECTOR_FORWARDEr
class ScalingVectorForwarder : public VectorProvidingComponent {
    private:
        int factor;
        VectorProvidingComponent *scaledProvider;

    public:
        ScalingVectorForwarder(VectorProvidingComponent *baseProvider);
        int getX();
        int getY();
};

#endif
