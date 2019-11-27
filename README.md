# Data Structure

## Searching

### 1. Linear Search (***[Java Coding](https://github.com/kaamrul/Data-Structure/blob/master/LinearSearch.java)*** or ***[C Coding](https://github.com/kaamrul/Data-Structure/blob/master/LinearSearch.c)***)

#### Algorithm
```
Step 1: set i = 0
Step 2: if i > n , go to step 7  // n = max size of an array
Step 3: if arr[i] = item , go to step 6  // item = founding value
Step 4: i = i + 1;
Step 5: go to step 2
Step 6: Print Item Found at Location arr[i]
Step 7: Print Item not Found
Step 8: Exit
```
### 2. Binary Search (***[Java Coding](https://github.com/kaamrul/Data-Structure/blob/master/BinarySearch.java)*** or ***[C Coding](https://github.com/kaamrul/Data-Structure/blob/master/BinarySearch.c)***)

#### Algorithm
```
Step 1: Set low = 0, high = n-1  // n, max size of an array
Step 2: mid = (low + high) / 2
Step 3: if item = array[mid]
			return mid;
Step 4: if item > array[mid]
			low = mid + 1
		else
			high = mid - 1
Step 5: Exit
```

## Sorting
```
> Bubble Sort
> Insertion Sort
> Selection Sort
> Merge Sort
> Quick Sort
> Radix Sort
> Shell Sort
> Heap Sort
> Bucket Sort
> Comb Sort
> Counting Sort
> Bitonic Sort
> Cocktail Sort
> Cycle Sort
> Tim Sort
```