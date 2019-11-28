#include<stdio.h>
int main(){
    int arr[] = {4,5,10,12,16,24,33,42};
    int i, item, mid, low = 0, high = 7;
    printf("Enter an Item: ");
    scanf("%d", &item);
    for(i=0; i<7; i++){
        if(low <= high){
            mid = (low + high) / 2;
            if(arr[mid] == item){
                mid =  mid+1;
                printf("Item Found at Location : %d", mid);
                break;
            }
            else if(arr[mid] > item){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            printf("Item not Found");
            break;
        }
    }
}

