#include <stdio.h>
#include <string.h>
int main()
{
        char s1[100];
        char s2[15];
        printf("Enter string: ");
        scanf(" %[^\n]",s1);
        printf("Search: ");
        scanf(" %[^\n]",s2);

        int i=0,j=0,count=0;
//      printf("%lu\n",strlen(s1));
//      printf("%d\n",s1[17]=='\0');
        for (;i<=strlen(s1);i++)
        {
        if (s1[i]==s2[j]){
                if(i==strlen(s1)){
                        count++;
                        for(int k=0;k<=strlen(s2);k++){
                                s1[i-k]='~';
                         }
      
                }

    
        j++;
        }
        else if (s1[i]!=s2[j])
        {       if (s1[i]==' ' && s2[j]=='\0')
        {
        count++;
        for(int k=0;k<=strlen(s2);k++){
                s1[i-k]='~';
                                   
                         }
      
                }

    
        j++;
        }
        else if (s1[i]!=s2[j])
        {       if (s1[i]==' ' && s2[j]=='\0')
        {
        count++;
        for(int k=0;k<=strlen(s2);k++){
                s1[i-k]='~';
                }
        j=0;
        }
        else
        j=0;
        }
        }
                printf("Count is %d \n",count);
//      printf(" modified string is : %s",s1);
        for(i=0;i<strlen(s1);i++){
                if(s1[i]=='~'){
                        continue;
                }
                else{
                        putchar(s1[i]);
                }
        }
        putchar('\n');
        return 0;
}
                                                                                                31,1-8        Bot
