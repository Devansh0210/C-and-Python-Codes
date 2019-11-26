#include<stdio.h>
#include<stdlib.h>
//#include<math.h>

void main(){


        int n,m;
//      printf("Enter m and n  : ");
        scanf(" %d",&m);
        scanf("%d",&n);
        int *arr[m];
        for(int i=0;i<m;i++){
                arr[i]=(int *)malloc(sizeof(int)*n);
                for(int j=0;j<n;j++){
                        scanf("%d",arr[i]+j);
                        }
                }

        for(int k=0;k<m;k++){
                for(int g=0;g<n;g++){
                        printf("%d ",*(arr[k]+g));
                        }
                free(arr[k]);
                printf("\n");
                }


}
