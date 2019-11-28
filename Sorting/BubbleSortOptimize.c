// Optimized Bubble Sort Algorithm for time complexity
#include<stdio.h>
int main()
{
    int array[] = {15,16,6,8,5};
    int i, j, temp=0, flag;
    for(i=0; i<5-1; i++){
        // introducing a flag to monitor swapping
        flag = 0;
        for(j=0; j<5-1-i; j++){
            if(array[j] > array[j+1]){
                // swap the elements
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                // if swapping happens update flag to 1
                flag = 1;
            }
        }
        // if value of flag is zero after all the iterations of inner loop
        // then break out
        if(flag == 0)
        break;
    }
    printf("Sorted Array List: ");
    for(i=0; i<5; i++){
        printf("%d ", array[i]);
    }
}
