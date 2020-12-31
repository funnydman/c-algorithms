#include <stdlib.h>
#include <stdio.h>

#define LENGTH 25

/*
 * Todo: write test cases
 * Can we write alg more accurate and easy to memorize?
 */
void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void quick_sort(int v[], int len) {
    int rightmark, leftmark, pivot;

    if (len <= 1) {
        return;
    }
    leftmark = 0;
    rightmark = len - 1;
    pivot = (leftmark + rightmark) / 2;

    while (leftmark < rightmark) {
        while (leftmark < pivot) {
            if (v[pivot] < v[leftmark]) {
                swap(v, leftmark, pivot);
                pivot = leftmark;
                break;
            } else {
                leftmark++;
            }
        }
        while (rightmark > pivot) {
            if (v[rightmark] < v[pivot]) {
                swap(v, rightmark, pivot);
                pivot = rightmark;
                break;
            } else {
                rightmark--;
            }
        }
    }
    quick_sort(v, leftmark);
    quick_sort(v + rightmark + 1, len - rightmark - 1);
}

int main() {
    int arr[LENGTH] = {19, 22, 16, 18, -24, 13, 8, 3, 7, 2, 23, -11, 17, 9, 1,
                       6,
                       5, 21, -10, 4, 26, -25, 20, -14, 15};
    quick_sort(arr, LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        printf("Val is %d\n", arr[i]);
    }
}
