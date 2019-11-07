#include<stdio.h>
#include<string.h>

void main()
{
        char s1[100];
        int i=0;

        scanf("%[^\n]",s1);
        for(i=0;i<strlen(s1);i++){
                if(s1[i]==' ' || s1[i]=='\0'){
                        putchar(' ');
                        continue;

                }
                else{

                        putchar(s1[i]-32);
                }


                }
                putchar('\n');



}
