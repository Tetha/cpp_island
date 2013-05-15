class VectorProvidingComponent;
class MutableVectorContainer;

class Entity {
    private:
        VectorProvidingComponent *precisePosition;
        MutableVectorContainer *precisePositionContainer;
    public:
        Entity();

        const bool hasPrecisePositionComponent();
        const VectorProvidingComponent *getPrecisePositionComponent();

        const bool hasPrecisePositionContainer();
        const MutableVectorContainer *getPrecisePositionContainer();
};
