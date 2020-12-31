/*
 * TODO: Can we write a little simpler?
 */

// version without while
//void insertion_sort(int arr[], int len) {
//    for (int i = 1; i < len; i++) {
//        if (arr[i] < arr[i - 1]) {
//            for (int j = i; arr[j] < arr[j - 1] && j > 0; j--) {
//                swap(arr, j, j - 1);
//            }
//        }
//    }
//}

void swap(int v[], int i, int j) {
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void insertion_sort(int arr[], int len) {
    int index;
    for (int i = 1; i < len; i++) {
        if (arr[i] < arr[i - 1]) {
            index = i;
            while (arr[index] < arr[index - 1] && index > 0) {
                swap(arr, index, index - 1);
                index--;
            }
        }
    }
}
