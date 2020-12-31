int linear_search(int arr[], int len, int elem) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == elem) {
            return 1;
        }
    }
    return -1;
}
