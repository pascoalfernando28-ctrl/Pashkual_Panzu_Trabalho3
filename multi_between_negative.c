#include "functions.h"

int multi_between_negative(const int *arr, int size) {
    int first = index_first_negative(arr, size);
    int last = index_last_negative(arr, size);
    if (first == -1 || last == -1 || first >= last) return 0; // ← CORRIGIDO!
    
    int product = 1;
    for (int i = first; i <= last; i++) {
        product *= arr[i];
    }
    return product;
}make clean
make
