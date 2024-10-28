/**
 * @file stack.h
 * @author Ryan Couchman
 * @brief Defines the functionality for a stack, a last  in first out sata structure
 * @version 0.1
 * @date 2024-10-28
 */

template <typename T>
class Stack {
    public:
    Stack(T value);
    ~Stack();
    void push(T value);
    T pop();
    T peek();
    bool isEmpty();
    bool isFull();
    private:
    vector<T> stack;
};
