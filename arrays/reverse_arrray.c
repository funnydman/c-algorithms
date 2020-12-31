#include <stdio.h>

#define length 10

void swap(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

void reverse_array(int arr[], int len) {
    for (int i = 0; i < (len / 2); i++) {
        swap(&arr[i], &arr[len - 1 - i]);
    }
}


int main() {
    int arr[length] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse_array(arr, length);
    for (int i = 0; i < length; i++) {
        printf("Val is %d\n", arr[i]);
    }
}