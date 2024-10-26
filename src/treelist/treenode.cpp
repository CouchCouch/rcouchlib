#include<iostream>
#include "treenode.h"

template <typename T>
TreeNode<T>::TreeNode(T value)
{
    this->value = value;
    this->right = nullptr;
    this->left = nullptr;
}

template <typename T>
TreeNode<T>::~TreeNode()
{
    if(this->right) {
        delete this->right;
    }
    if(this->left) {
        delete this->left;
    }
}

template <typename T>
T TreeNode<T>::getValue()
{
    return this->value;
}

template <typename T>
void TreeNode<T>::setLeft(TreeNode<T> * left)
{
    this->left = left;
}

template <typename T>
void TreeNode<T>::setRight(TreeNode<T> * right)
{
    this->right = right;
}

template <typename T>
TreeNode<T> * TreeNode<T>::getLeft()
{
    return this->left;
}

template <typename T>
TreeNode<T> * TreeNode<T>::getRight()
{
    return this->right;
}

template <typename T>
void TreeNode<T>::print()
{
    if(this->left != nullptr) {
        this->left->print();
    }
    std::cout << this->getValue() << " ";
    if(this->right != nullptr) {
        this->right->print();
    }
}