#include <stdio.h>

/* steps of writing bubble sort:
1) Create prototypes for function bubble_sort and swap
2) In function bubble_sort create two loops(one nested). Don't forgot in nested loop last element (len-1)!!!
for(int i=0; i<len; i++) {
  for(int j=0; j<len-1; j++) {

  }
}
3) How do you want to sort your array. In increase or decrease order?
if(arr[j] > arr[j+1]) vs if(arr[j] < arr[j+1])
4) Write swap function to swap two elements of array
5) Can we optimize bubble_sort. Yes, we can decrease count for the nested loop
by ... j<len-i-1
*/

// decrease order
//    for (int i = LENGTH - 1; i >= 0; i--) {
//        for (int j = LENGTH - 1; j >= LENGTH - i; j--) {
//            if (arr[j] > arr[j - 1]) {
//                swap(&arr[j], &arr[j - 1]);
//            }
//        }
//    }
//    for (int i = 0; i < LENGTH; i++) {
//        printf("VAL is %d\n", arr[i]);
//    }

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(void) {
    int const N = 5;
    int arr[N] = {4, 1, -5, 6, 7};
    bubble_sort(arr, N);
    for (int i = 0; i < LEN; i++) {
        printf("Val is %d\n", arr[i]);
    }

}
