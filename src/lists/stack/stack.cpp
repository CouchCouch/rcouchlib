#include "stack.h"

template<typename T>
Stack<T>::Stack(T value) {
    this->stack.push_back(value);
}

template<typename T>
Stack<T>::~Stack() {
    delete this->stack;
}

template<typename T>
void Stack<T>::push(T value) {
    this->stack.push_back(value);
}

template<typename T>
T Stack<T>::pop() {
    return this->stack.pop_back()
}