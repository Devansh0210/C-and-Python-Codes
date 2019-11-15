#include<stdio.h>
#include<math.h>

int isArmstrong(int x){

        int num,y,sum,z,i;
        y=x/10;
        z=x;
        num=1;
        while(1){
                if(y!=0){
                num=num+1;
                y=y/10;
                }
                else{
                        break;
                }
        }
//      printf("%d\n",num);
        sum=0;
        for(i=1;i<=num;i++){

                sum=sum+pow(z%10,num);
                z=z/10;
        }
//      printf("%d\n",sum);
        if(sum==x){
                return 1;
                }
        else{
                return 0;
                }

}
void main(){

        int u,l,n;
        printf("Enter upper bound : ");
        scanf("%d",&u);
        printf("Enter lower bound : ");
        scanf("%d",&l);
        for(n=u;n<=l;n++){
                if(isArmstrong(n)==1){
                        printf("%d\t",n);
                        }
                else{
                        continue;
                        }
                }

        }
