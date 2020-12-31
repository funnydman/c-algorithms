#include <stdio.h>
#include <stdlib.h>

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void quick_sort(int v[], int n) {
    int last;

    if (n <= 1) {
        return;
    }
    swap(v, 0, rand() % n);
    last = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < v[0]) {
            swap(v, ++last, i);
        }
    }
    swap(v, 0, last);
    quick_sort(v, last);
    quick_sort(v + last + 1, n - last - 1);
}

int main() {
    int arr[] = {4, 1, 45, 32, 0, 19};
    quick_sort(arr, 6);
    for (int i = 0; i < 6; i++) {
        printf("Val is %d\n", arr[i]);
    }
}
