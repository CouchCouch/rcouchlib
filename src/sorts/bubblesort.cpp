/**
 * @file bubblesort.cpp
 * @author Ryan Couchman
 * @brief implementation of the bubble sort algorithm.
 * @version 0.1
 * @date 2024-10-27
 */

#include <iostream>
#include <vector>

/**
 * @brief Sorts a vector of integers using the bubble sort algorithm.
 * 
 * @param vec vector to be sorted.
 */
void bubbleSort(std::vector<int> &vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}