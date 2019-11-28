// Simple Bubble Sort Algorithm
public class BubbleSort {

	public static void main(String[] args) {
		int i, j, temp = 0;
		int[] arr = {15,16,6,8,5};
		for(i=0; i<arr.length-1; i++) {
			for(j=0; j<arr.length-1-i; j++) {
				if(arr[j] > arr[j+1]) {
					// swap the elements
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		System.out.println("Sorted Array List : ");
		for (i = 0; i < arr.length; i++) {
			System.out.println(arr[i]+" ");
		}
	}
}
