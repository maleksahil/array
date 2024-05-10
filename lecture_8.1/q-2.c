#include<stdio.h>

int main(){
   
    
     int size,sum=0;
     int count = 0;

     printf("enter the value of size: ");
     scanf("%d",&size);


     int number[size];

     for(int y=0; y<size; y++){
        printf("number[%d] = ",y);
        scanf("%d",&number[y]);
        sum += number[y];
        count++;
        
     }

     int avarage = sum / count;

     printf("avarage of array is %d",avarage);
     


}