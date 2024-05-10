#include<stdio.h>

int main(){

    int size;

    printf("enter size: ");
    scanf("%d",&size);

    int arr1[size];

    for(int x=0; x<size; x++){
        printf("arr1[%d]=",x);
        scanf("%d",&arr1[x]);
    }


    int arr2[size];

    for(int y=0; y<size; y++){
        printf("arr2[%d]=",y);
        scanf("%d",&arr2[y]);
    }

    int arr3[size];

    for(int z=0; z<size; z++){
        arr3[z]=arr1[z]+arr2[z];
        printf("%d\t",arr3[z]);
    }
}