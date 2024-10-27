/**
 * @file treelist.h
 * @author Ryan Couchman
 * @brief A list that is implemented as a binary search tree.
 * @version 0.1
 * @date 2024-10-26
 */
#ifndef TREELIST_H
#define TREELIST_H
#include "treenode.h"
#include "treenode.cpp"
#include "list.h"

template <typename T>
class TreeList//: public List<T>
{
private:
    TreeNode<T> * head;
public:
    /**
     * @brief Construct a new Tree List object
     * 
     * @param value value of the head of the list.
     */
    TreeList(T value);

    /**
     * @brief Construct a new Tree List object with no head.
     */
    TreeList();

    /**
     * @brief Destroy the Tree List object
     */
    ~TreeList();
    
    /**
     * @brief insert a value into the list.
     * 
     * @param value value to be inserted.
     */
    void insert(T value);

    /**
     * @brief remove a value from the list.
     * 
     * @param value value to be removed.
     * @return T the removed value if found, otherwise NULL.
     */
    T remove(T value);

    /**
     * @brief check if a value is in the list.
     * 
     * @param value value to be checked.
     * @return true if the value is in the list, otherwise false.
     */
    bool contains(T value);

    /**
     * @brief print the list.
     */
    void print();
};

#endif