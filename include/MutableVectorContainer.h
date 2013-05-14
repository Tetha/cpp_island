#include "VectorProvidingComponent.h"
class MutableVectorContainer : public VectorProvidingComponent {
    private:
        int x;
        int y;

    public:
        MutableVectorContainer();
        void setVector(int x, int y);
	int getX();
	int getY();
};
