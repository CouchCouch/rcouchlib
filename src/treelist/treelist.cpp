/**
 * @file treelist.cpp
 * @author Ryan Couchman
 * @brief Implementation of a binary search tree.
 * @version 0.1
 * @date 2024-10-26
 */
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
    if (this->head == nullptr) {
        return NULL;
    }

    TreeNode<T> * current = this->head;
    TreeNode<T> * parent = nullptr;
    while (current)
    {
        if(current->getValue() > value) {
            parent = current;
            current = current->getLeft();
        } else if(current->getValue() < value) {
            parent = current;
            current = current->getRight();
        } else {
            if(!current->getLeft() && !current->getRight()) {
                if(current != this->head) {
                    if(parent->getLeft() == current) {
                        parent->setLeft(nullptr);
                    } else {
                        parent->setRight(nullptr);
                    }
                } else {
                    this->head = nullptr;
                }
                T value = current->getValue();
                delete current;
                return value;
            } else if(current->getLeft() && current->getRight()) {
                TreeNode<T> * successor = current->getRight();
                while (successor->getLeft())
                {
                    successor = successor->getLeft();
                }
                T value = successor->getValue();
                remove(value);
                current->setValue(value);
                return value;
            } else {
                TreeNode<T> * child = current->getLeft() ? current->getLeft() : current->getRight();

                if(current != this->head) {
                    if(parent->getLeft() == current) {
                        parent->setLeft(child);
                    } else {
                        parent->setRight(child);
                    }
                } else {
                    this->head = child;
                }

                T value = current->getValue();
                delete current;
                return value;
            }
        }
    }


    return NULL;
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
