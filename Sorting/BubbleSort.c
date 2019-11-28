// Simple Bubble Sort Algorithm
#include<stdio.h>
int main()
{
    int array[] = {15,16,6,8,5};
    int i, j, temp=0, flag;
    for(i=0; i<5-1; i++){
        for(j=0; j<5-1-i; j++){
            if(array[j] > array[j+1]){
                // swap the elements
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("Sorted Array List: ");
    for(i=0; i<5; i++){
        printf("%d ", array[i]);
    }
}
