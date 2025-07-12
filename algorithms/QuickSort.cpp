#include "QuickSort.h"
void QuickSort::sort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int pivot = arr[right], i = left - 1;
        for (int j = left; j < right; ++j)
            if (arr[j] < pivot) std::swap(arr[++i], arr[j]);
        std::swap(arr[i + 1], arr[right]);
        int p = i + 1;
        sort(arr, left, p - 1);
        sort(arr, p + 1, right);
    }
}

