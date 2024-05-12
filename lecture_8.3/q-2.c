#include<stdio.h>

int main(){

    

     int size1,size2;

    printf("enter the value of size1: ");
    scanf("%d",&size1);

    printf("enter the value of size2: ");
    scanf("%d",&size2);

    int arr1[size1][size2];
    int arr2[size1][size2];
    int arr3[size1][size2];

    printf("enter the elements of array1: \n");
    
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
           printf("arr1[%d][%d] =",i,j);
           scanf("%d",&arr1[i][j]);
        }
    }

    printf("enter the elements of array2: \n");


    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
           printf("arr[%d][%d] =",i,j);
           scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }


}