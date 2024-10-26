template <typename T>
class Node
{
private:
    T value;
    Node<T> * next;
public:
    Node(T value);
    Node(T value, Node<T> * next);
    void setNext(Node<T> * next);
    T getNext();
    ~Node();
};