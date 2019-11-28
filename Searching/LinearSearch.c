#include<stdio.h>
int main(){
    int arr[] = {4,5,10,12,16,24,33,42};
    int i, item, flag = 0;
    printf("Enter an Item: ");
    scanf("%d", &item);
    for(i=0; i<7; i++){
        if(arr[i]==item){
            flag=i+1;
            break;
        }
        else{
            flag=0;
        }
    }
    if(flag!=0){
        printf("Item found at Location: %d", flag);
    }
    else{
        printf("Item not found");
    }
}
