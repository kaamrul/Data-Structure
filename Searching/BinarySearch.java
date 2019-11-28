import java.util.Scanner;

public class BinarySearch {

	public static void main(String[] args) {
		int array[] = {4,5,10,12,16,24,33,24};
		int item, mid, low = 0, high = 7;
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter an Item: ");
		item = obj.nextInt();
		for(int i = 0; i < 7; i++) {
			if(low <= high){
				mid = (low + high) / 2;
				if(array[mid] == item) {
					mid = mid + 1;
					System.out.println("Item Found at Location :"+mid);
					break;
				}
				if(array[mid] > item) {
					high = mid - 1;
				}
				else {
					low = mid + 1;
				}
			}
			else {
				System.out.println("Item not Found");
				break;
			}
		}
	}
}
