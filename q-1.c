#include<stdio.h>

int main(){
   
    
     int size;
     int count = 0;

     printf("enter the value of size: ");
     scanf("%d",&size);


     int number[size];

     for(int y=0; y<size; y++){
        printf("number[%d] = ",y);
        scanf("%d",&number[y]);
     }

     for(int x=0; x<size; x++){
        // printf("%d\n",count);
        count++;
     }

     printf("lenth of array is %d",count);

}