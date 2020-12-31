## Sorting Algorithms

### Insertion sort
Sorting algorithm which sorting one element per one iteration. Looks like when we sorting a deck of cards. One of the fasters algorithms on small arrays(faster than even quick sort!). 

Because insertion sort is stable its commonly used as recursive base case when array is small for higher overhead devide-and-conquer algorithms(merge sort, quick sort). Insertion sort is used in qsort function in GNU C Library. However in linux kernel is used heap sort because:


> Sorting time is O(n log n) both on average and worst-case. While qsort is about 20% faster on average, it suffers from exploitable O(n*n) worst-case behavior and extra memory requirements that make it less suitable for kernel use.

See for more details: https://github.com/torvalds/linux/blob/master/lib/sort.c

#### Algorithm (in increasing order):

1) Assume that first element with zero index is sorted. The loop starts from first element. And go until the end of array.
```c
for (int i = 1; i < len; i++) {
```
2) Check two elements. If the previous element is greater:
```c
  if (arr[i] < arr[i - 1]) {
```

3) Then save iter counter and going to the left; swap elements while we not found lesser element:
```c
index = i;
while (arr[index] < arr[index - 1] && index > 0) {
```
4) Swap elements and decrease index variable:
```c
swap(arr, index, index - 1);
index--;
```
#### All code:
```c
void swap(int arr[], int j, int i) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
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
```
#### What you shoud know about the algorithm:

* In practice is more effective than bubble sort and selection sort.
* Adaptive - work well with partially sorted arrays. Time complexity O(nk) when each element in the input is no more than k places away from its sorted position
* Stable - don't change ralative order of elements with the same keys
* In place - require only constant quantity O(1) of additional memory 
* Online - Can sort input elements in real time.

|             Case            |          Complexity          |
|:---------------------------:|:----------------------------:|
| Worst-case performance      | О(n^2) comparisons, swaps    |
| Best-case performance       | O(n) comparisons, O(1) swaps |
| Average performance         | О(n^2) comparisons, swaps    |
| Worst-case space complexity | O(n) total, O(1) auxiliary   |



**Best-case perfomance** - when a array is sorted. We only need one iteration.

**Worst-case(very simple case)** - a array is sorted in different order.

**Average-case** - also quadratic which makes algorithm is impractical.


### Selection sort

Sorting algorithm which in every iteration selects minimum element (considering ascending order) and put it in the right place. Therefore we maintaince sorted and unsorted parts of array. In comparison with insertion sort makes only one swaping operation per iteration. Generally performs worse than the similar insertion sort.

 #### Algorithm (in increasing order):
 
 1) Record pointer to the first element of an array. Iterate through the remaining part of an array and found a minimum element.
 2) If element is found then swap it with the recorded pointer. And increment pointer. 
 3) If not then increment pointer to the next element and so on.
 
 Analysis:
 On every iteration we need to check n-1 elements. Therefore:
 
 ```c
 (n-1) + (n-2) + (n-3) + 1 = O(n^2)
 ```
 
| Case                        | Complexity                     |
|-----------------------------|--------------------------------|
| Best-case performance       | О(n^2) comparisons, О(n) swaps |
| Average performance         | О(n^2) comparisons, О(n) swaps |
| Worst-case performance      | О(n^2) comparisons, О(n) swaps |
| Worst-case space complexity | O(1) auxiliary                 |
