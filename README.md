# Data Structure

## Searching

### 1. Linear Search (***[Java Coding](https://github.com/kaamrul/Data-Structure/blob/master/Searching/LinearSearch.java)*** or ***[C Coding](https://github.com/kaamrul/Data-Structure/blob/master/Searching/LinearSearch.c)***)

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
### 2. Binary Search (***[Java Coding](https://github.com/kaamrul/Data-Structure/blob/master/Searching/BinarySearch.java)*** or ***[C Coding](https://github.com/kaamrul/Data-Structure/blob/master/Searching/BinarySearch.c)***)

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

### 1. Bubble Sort (***[Java Coding](https://github.com/kaamrul/Data-Structure/blob/master/Sorting/BubbleSort.java)*** or ***[C Coding](https://github.com/kaamrul/Data-Structure/blob/master/Sorting/BubbleSort.c)***) && Optimize Bubble Sort (***[Java Coding](https://github.com/kaamrul/Data-Structure/blob/master/Sorting/BubbleSortOptimize.java)*** or ***[C Coding](https://github.com/kaamrul/Data-Structure/blob/master/Sorting/BubbleSortOptimize.c)***)

#### Algorithm
```
Step 1: Repeat steps 2 and 3 for i = 0 to n-1  // n, max size of an array
Step 2: Set j = 0 to n-1-i
Step 3: if Array[j] > Array[j+1]
		swap Array[j] and Array[j+1]

		temp = Array[j]
		Array[j] = Array[j+1]
		Array[j+1] = temp

Step 4: Exit
```
### 2. Insertion Sort
```
 3. Selection Sort
 4. Merge Sort
 5. Quick Sort
 6. Radix Sort
 7. Shell Sort
 8. Heap Sort
 9. Bucket Sort
 10. Comb Sort
 11. Counting Sort
 12. Bitonic Sort
 13. Cocktail Sort
 14. Cycle Sort
 15. Tim Sort
```