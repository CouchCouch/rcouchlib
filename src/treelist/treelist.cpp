#include "treelist.h"
#include <iostream>

template <typename T>
TreeList<T>::TreeList(T value)
{
    this->head = new TreeNode<T>(value);
}

template <typename T>
TreeList<T>::TreeList()
{
    this->head = nullptr;
}

template <typename T>
TreeList<T>::~TreeList()
{
    if(this->head) {
        delete this->head;
    }
}

template <typename T>
void TreeList<T>::insert(T value)
{
    TreeNode<T> * newNode = new TreeNode<T>(value);
    if (this->head == nullptr) {
        this->head = newNode;
    } else {
        TreeNode<T> * current = this->head;
        TreeNode<T> * parent = nullptr;
        while (current) {
            parent = current;
            if (current->getValue() == value) {
                return;
            }
            if(current->getValue() > value) {
                current = current->getLeft();
            } else {
                current = current->getRight();
            } 
        }

        if (parent && parent->getValue() > value) {
            parent->setLeft(newNode);
        } else {
            parent->setRight(newNode);
        }
    }
}

template <typename T>
T TreeList<T>::remove(T value)
{
    TreeNode<T> * current = head;
    TreeNode<T> * parent = nullptr;
    while (current) {
        if (current->getValue() == value) {
            break;
        }
        parent = current;
        if (current->getValue() > value) {
            current = current->getLeft();
        } else {
            current = current->getRight();
        }
    }

    if (current == nullptr) {
        return nullptr;
    }

    T removedValue = current->getValue();
    if (current->getLeft() == nullptr && current->getRight() == nullptr) {
        if (parent && parent->getLeft() == current) {
            parent->setLeft(nullptr);
        } else {
            parent->setRight(nullptr);
        }
        delete current;
    } else if (current->getLeft() == nullptr) {
        if (parent && parent->getLeft() == current) {
            parent->setLeft(current->getRight());
        } else {
            parent->setRight(current->getRight());
        }
        delete current;
    } else if (current->getRight() == nullptr) {
        if (parent && parent->getLeft() == current) {
            parent->setLeft(current->getLeft());
        } else {
            parent->setRight(current->getLeft());
        }
        delete current;
    } else {
        TreeNode<T> * successor = current->getRight();
        TreeNode<T> * successorParent = current;
        while (successor->getLeft()) {
            successorParent = successor;
            successor = successor->getLeft();
        }
        current->setValue(successor->getValue());
        if (successorParent->getLeft() == successor) {
            successorParent->setLeft(successor->getRight());
        } else {
            successorParent->setRight(successor->getRight());
        }
        delete successor;
    }

    return removedValue;
}

template <typename T>
bool TreeList<T>::contains(T value)
{
    TreeNode<T> * current = this->head;
    while (current) {
        if (current->getValue() == value) {
            return true;
        }
        if (current->getValue() > value) {
            current = current->getLeft();
        } else {
            current = current->getRight();
        }
    }
    return false;
}

template <typename T>
void TreeList<T>::print()
{
    if(this->head) {
        this->head->print();
    }
    std::cout << "\n" << std::endl;
}
