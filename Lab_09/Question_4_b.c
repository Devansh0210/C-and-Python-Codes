#include<stdio.h>

void occ(char list[],int n){

        char check[26];
        int o[26]={0},i,j;

        for(i=65;i<=90;i++){
                check[i-65]=(char)i;
                }
        check[26]='\0';
        for(i=0;i<26;i++){
                for(j=0;j<=n;j++){
                        if(check[i]==list[j]){
                                        o[i]++;
                                }
                        else{
                                        continue;
                                }
                        }
                }
        printf("The no. of occurece is :  ");
        for(i=0;i<25;i++){
                if(o[i]!=0){
                        printf("%c:%d ",check[i],o[i]);
                        }
                else{
                        continue;
                        }
                }
        printf("\n");
}

void main(){

        char s[20],check[26];
        int i,N,j;
        printf("Enter the string : ");
        i=0;

        s[0]=getchar();
        while(s[i]!='\n'){
                i++;
                s[i]=getchar();

                }

        occ(s,i);

}
