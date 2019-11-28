import java.util.Scanner;
public class LinearSearch {

	public static void main(String[] args) {
		int array[] = {4,5,10,12,16,24,33,24};
		int item, flag = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter an Item: ");
		item = sc.nextInt();
		for(int i = 0; i < 7; i++) {
			if(array[i] == item) {
				flag = i + 1;
				break;
			}
			else {
				flag = 0;
			}
		}
		if(flag != 0) {
			System.out.println("Item Found at Location "+flag);
		}
		else {
			System.out.println("Item not found");
		}
	}
}
