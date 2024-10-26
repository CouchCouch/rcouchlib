#ifndef TREENODE_H
#define TREENODE_H

template <typename T>
class TreeNode
{
private:
    // The value of the node
    T value;
    // The left node
    TreeNode<T> * left;
    // The right node
    TreeNode<T> * right;
public:
    /**
     * @brief Construct a new Tree Node object
     * 
     * @param value the value of the node
     */
    TreeNode(T value);

    /**
     * @brief Destroy the Tree Node object
     */
    ~TreeNode();

    /**
     * @brief Get the Value object
     * 
     * @return T the value of the node
     */
    T getValue();

    /**
     * @brief Set the Left object
     * 
     * @param left the left node
     */
    void setLeft(TreeNode<T> * left);

    /**
     * @brief Set the Right object
     * 
     * @param right the right node
     */
    void setRight(TreeNode<T> * right);

    /**
     * @brief Get the Left object
     * 
     * @return T the left node
     */
    TreeNode<T> * getLeft();

    /**
     * @brief Get the Right object
     * 
     * @return T the right node
     */
    TreeNode<T> * getRight();  

    /**
     * @brief print the node.
     */
    void print();
};

#endif
