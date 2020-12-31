void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
            *largest = max;
        } else if (*largest > *second_largest) {
            if (*second_largest < a[i]) {
                *second_largest = a[i];
            }
        }
    }
}
