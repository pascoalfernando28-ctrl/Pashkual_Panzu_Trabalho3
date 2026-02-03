#include "functions.h"

int multi_before_and_after_negative(const int *arr, int size) {
    int first = index_first_negative(arr, size);
    int last = index_last_negative(arr, size);
    if (first == -1 || last == -1) return 0;

    int product = 1;
    for (int i = 0; i < first; i++) {
        product *= arr[i];
    }
    for (int i = last; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

