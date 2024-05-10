#include<stdio.h>

int main(){

    int size;

    printf("enter any size: ");
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }

    for(int z=0; z<size; z++){
        printf("%d ",arr[z]*arr[z]);
    }
}