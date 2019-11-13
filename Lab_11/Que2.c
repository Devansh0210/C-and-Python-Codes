#include<stdio.h>
#include<string.h>

typedef struct{

        char fname[70];
        int freq;

}NAME;
void getData(NAME arr[],int n){

        getchar();
        for(int i=0;i<n;i++){
                scanf("%s",arr[i].fname);
                getchar();
                scanf("%d",&arr[i].freq);
                getchar();
        }


}

float findP(NAME arr[],int threshold,int n){
        float P=0;
        int total=0,i=0;
        for(;i<n;i++){
                total=total+arr[i].freq;
        }

        for(i=0;i<n;i++){
                if(strlen(arr[i].fname)<=threshold){
                                P=P+arr[i].freq;
                        }
                }
                }
        return P/total*100.0;
}

void main(){

        int n,threshold;
        scanf("%d",&n);
        scanf("%d",&threshold);
        NAME pep[n];
        getData(pep,n);
//      findP(pep,threshold,n);
        printf("%.3f\n",findP(pep,threshold,n));

}
