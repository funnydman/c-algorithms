#include <stdio.h>

void merge(int arr[], int first, int last) {
    int middle, start, final;
    int mas[100];
    middle = (first + last) / 2;
    start = first;
    final = middle + 1;
    for (int j = first; j <= last; j++)
        if ((start <= middle) &&
            ((final > last) || (arr[start] < arr[final]))) {
            mas[j] = arr[start];
            start++;
        } else {
            mas[j] = arr[final];
            final++;
        }
    for (int j = first; j <= last; j++) {
        arr[j] = mas[j];
    };
};

void merge_sort(int arr[], int first, int last) {
    {
        if (first < last) {
            merge_sort(arr, first, (first + last) / 2); //sorting left part
            merge_sort(arr, (first + last) / 2 + 1,
                       last); // sorting right part
            merge(arr, first, last);
        }
    }
};

int main() {
    int arr[] = {7, 1, 2, 6};
    merge_sort(arr, 0, 3);
    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }
}
