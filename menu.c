#include <stdio.h>
#include "functions.h"

int main(void) {
    int cmd;
    int arr[20];
    int size = 0;

    if (scanf("%d", &cmd) != 1) {
        printf("Invalid data\n");
        return 0;
    }

    while (size < 20 && scanf("%d", &arr[size]) == 1) {
        size++;
    }

    switch (cmd) {
        case 0:
            printf("%d\n", index_first_negative(arr, size));
            break;
        case 1:
            printf("%d\n", index_last_negative(arr, size));
            break;
        case 2:
            printf("%d\n", multi_between_negative(arr, size));
            break;
        case 3:
            printf("%d\n", multi_before_and_after_negative(arr, size));
            break;
        default:
            printf("Invalid data\n");
    }
    return 0;
}

