/**
 * @file quicksort.cpp
 * @author Ryan Couchman
 * @brief 
 * @version 0.1
 * @date 2024-10-27
 */
#include<vector>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];

    int i = low - 1;

    for(int j = low; j <= high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1],  arr[high]);
    return i + 1;
}

void quicksort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);

        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex, high);
    }
}