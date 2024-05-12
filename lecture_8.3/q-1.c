#include<stdio.h>

int main(){

    printf("this Program to find the average of a given 2D array.\n");

    int size1,size2;

    printf("enter the value of size1: ");
    scanf("%d",&size1);

    printf("enter the value of size2: ");
    scanf("%d",&size2);

    int arr[size1][size2];
    
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
           printf("arr[%d][%d] =",i,j);
           scanf("%d",&arr[i][j]);
        }
    }


    int sum = 0,count=0;

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            sum += arr[i][j];
            count++;
        }
    }

  

    int avarage = sum/count;

    printf("avarage of given aray is %d",avarage);


}