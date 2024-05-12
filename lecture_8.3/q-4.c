#include<stdio.h>

int main(){

    int arr[5][5]={{2,4,1,3,6},{9,5,4,6,7},{8,2,6,3,5},{3,4,8,5,1},{2,3,9,5,1}};

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("arr[%d][%d] =",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i==0 || i==4 || j==0 || j==4){
                printf("%d ",arr[i][j]);
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }

    

}