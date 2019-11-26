#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float* noArray(int N){

        float* arr=malloc(sizeof(float)*N);
        for(int i=0;i<N;i++){
                printf("Enter the no. : ");
                        scanf(" %f",&arr[i]);
                if(arr[i]<0){
                        printf("Enter the positive no. : ");
                        scanf(" %f",&arr[i]);
        //              arr[i]=sqrt(arr[i]);
                }

        arr[i]=sqrt(arr[i]);
        }
        return arr;
}

void main(){

        int N;
        printf("Enter the no. of elements : ");
        scanf(" %d",&N);
        float* array=noArray(N);

        for(int i=0;i<N;i++){
                printf("%.2f ",array[i]);
                }

        printf("\n ");
        free(array);
//      printf("%ld\n",sizeof(array));

}
