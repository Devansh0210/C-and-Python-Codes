#include<stdio.h>

void main(){

        char s[20];
        int i,N;
        printf("Enter the string : ");
//      scanf("%d",&N);
        i=0;


        s[0]=getchar();
        while(s[i]!='\n'){
                i++;
                s[i]=getchar();

                }
//      s[++i]='\0';
//        for
        printf("%s\n",s);

}
