#include<stdio.h>
#include<math.h>

int bin(int x){
        int n,i;
        i=1;
        n=0;
        while(x!=0)
        {
                n=n+x%2*(int)pow(10,i-1);
                x=(int)x/2;
                i=i+1;

        }
        return n;
}
//int dec(int x){
int dec(int x){

        int n,i;
        i=1;
        n=0;
        while(x!=0){
                n=n+x%10*(int)pow(2,i-1);
                x=(int)(x/10);
                        i=i+1;
        }

        return n;

}
//}
int main(){
//      int arg;        
        char choice;
        while(1){
                printf("Enter your choice : ");
                scanf(" %c\n",&choice);

                if(choice=='b'){
                        int arg;
                        scanf("%d",&arg);
                        printf("The value of convertion is : %d\n",bin(arg));
                                }

                else if(choice=='d'){
                        int arg;
                        scanf("%d",&arg);
                        printf("The value of convertion is : %d\n",dec(arg));
                }


                else if(choice=='x'){
                        break;
                        }

                }

}
