class VectorProvidingComponent;
class MutableVectorContainer;

class Entity {
    private:
        VectorProvidingComponent *precisePosition;
        MutableVectorContainer *precisePositionContainer;
    public:
        bool hasPrecisePositionComponent();
        VectorProvidingComponent *getPrecisePositionComponent();

        bool hasPrecisePositionContainer();
        MutableVectorContainer *getPrecisePositionContainer();
}
