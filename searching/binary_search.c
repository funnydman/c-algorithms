int binary_search(int arr[], int len_arr, int elem) {
    int low = 0;
    int high = len_arr - 1;

    while (high >= low) {
        int mid = (low + high) / 2;

        if (arr[mid] == elem) {
            return 1;
        }

        if (arr[mid] < elem) {
            low = mid + 1;
        } else if (arr[mid] > elem) {
            high = mid - 1;
        }
    }
    return -1;

}

int binary_search_rec(int arr[], int low, int high, int elem) {
    int middle;
    while (low <= high) {
        middle = (low + high) / 2;
        if (arr[middle] == elem) {
            return 1;
        }
        if (elem < arr[middle]) {
            return binary_search_rec(arr, low, middle - 1, elem);
        }
        if (elem > arr[middle]) {
            return binary_search_rec(arr, middle + 1, high, elem);
        }
    }
    return -1;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = 9;
    int res = binary_search(arr, length, 6);
    printf("Found or not %d\n", res);
}
