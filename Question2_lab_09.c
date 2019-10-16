/ Question->Reversing array without using additional array

#include<stdio.h>

void main(){

        int arr[100],N;
        printf("Enter the size of array : ");
        scanf(" %d",&N);

        int i=0;
        for(;i<N;i++){

                printf("Enter the value of element : ");
                scanf(" %d",&arr[i]);

        }


        for(i=0;i<(int)N/2;i++){

                static int temp;
                temp=arr[i];
                arr[i]=arr[N-i-1];
                arr[N-i-1]=temp;

                }
        printf("The value of reversed array is : ");
        for(i=0;i<N;i++){
                printf("%d ",arr[i]);

        }
        printf("\n");
