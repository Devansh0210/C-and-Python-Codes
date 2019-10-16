#include<stdio.h>

int main(){
        int arr[100],N;
        do{
        printf("Enter the size of array : ");
        scanf(" %d",&N);
        if(N>100)
                printf("Enter the no. less than 100 ......\n");
        }
        while(N>100);
        int i=0;
        for(;i<N;i++){

                printf("Enter the value of element : ");
                scanf(" %d",&arr[i]);

        }
        printf("The value of square of each element is : ");
        for(i=0;i<N;i++){

                printf(" %d  ",arr[i]*arr[i]);

                }
        printf("\n");

}
