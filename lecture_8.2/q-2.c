#include<stdio.h>

int main(){

    int first_number,second_number,count=0;
    

    printf("enter the first number: ");
    scanf("%d",&first_number);

    printf("enter the second number: ");
    scanf("%d",&second_number);

    int arr[100];

    for(int i=first_number; i<=second_number; i++){
        if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            arr[count] = i;
            printf("%d",arr[count]);
            count++;
        }
    }
}