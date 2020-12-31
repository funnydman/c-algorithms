void swap(int arr[], int j, int i) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

//void selection_sort(int arr[], int len) {
//    int c_min;
//
//    for (int j = 0; j < len - 1; j++) {
//        c_min = j;
//        for (int i = j + 1; i < len; i++) {
//            if (arr[i] < arr[c_min]) {
//                c_min = i;
//            }
//        }
//        if (c_min != j) {
//            swap(arr, j, c_min);
//        }
//    }
//
//}

//// Todo: I think this version is more easy to understand.
//// Test it!
void selection_sort(int arr[], int len) {
    int index_min;
    for (int i = 0; i < len; i++) {
        index_min = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] < arr[i]) {
                index_min = j;
            }
        }
        if (arr[i] > arr[index_min]) {
            swap(arr, index_min, i);
        }
    }
}
