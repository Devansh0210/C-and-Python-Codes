#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){


        if(argc!=4){
                printf("The no.of arguments should be 4\n");
                return 0;
//              main();
                }
        int N1,N2;
        N1=atoi(argv[1]);
        N2=atoi(argv[2]);


        int i=atoi(argv[3]);
        int temp,sum;
        switch(i){
        case 0:
                printf("\n");
                break;
        case 1:
        //      int temp;
                temp=N2;
                N2=N1;
                N1=temp;
                printf("%d %d\n",N1,N2);
                break;

        case 2:
        //      int sum;
                sum=N1+N2;
                printf("%d\n",sum);
 
        default:
                break;

        }


}
        
