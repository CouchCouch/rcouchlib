/**
 * rcouchlib - A C++ library with some data structures and algorithms.
 * 
 * This file contains the definition of the List class.
 */
template <typename T>
class List
{
public:
    /**
     * @brief Construct a new List object
     * 
     * @param value the value to be the head of the list.
     */
    List(T value);
    /**
     * @brief Construct a new List object with no head.
     */
    List();
    /**
     * @brief Destroy the List object
     */
    ~List();
    /**
     * @brief Insert a value in the list.
     * 
     * @param value the value to be inserted.
     */
    void insert(T value);
    /**
     * @brief Remove a value from the list.
     * 
     * @param value the value to be removed.
     * @return T the remved value if found, otherwise nullptr.
     */
    T remove(T value);
    /**
     * @brief Check if a value is in the list.
     * 
     * @param value the value to be checked.
     * @return true if the value is in the list, otherwise false.
     */
    bool contains(T value);
    /**
     * @brief Print the list.
     */
    void print();
};