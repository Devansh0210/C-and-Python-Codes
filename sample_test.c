//***************************************************************
//******* PLEASE FILL THESE DETAILS AND COMMENT THE LINES *******
//** UNLESS YOU COMMENT THESE LINES, THE CODE WILL NOT COMPILE **
//  Name:
//  Id no.:
//  Terminal no.:
//  Lab no.: 
//***************************************************************
//***************************************************************

#include<stdio.h>
#include<string.h>
/////////// DO NOT MODIFY ANYTHING in main() ////////
char* search(char*, int);
void main()
{
char * p;
char c;
char s[20];
printf("This code will run for five strings\n");
for (int i=0; i<5; i++)
{
        scanf("%s %c",s,&c);
        p = search(s, c);
        printf("new string: %s\n", p);
        }
}
///////////////////////////////////////////////
//DO NOT MODIFY ANYTHING ABOVE THIS LINE
///////////////////////////////////////////////

//// Write your code below /////
char* search(char* str,int ch){
    
    str=strchr(str,ch);
    str=str+1;
    str=strchr(str,ch);
    
    return str;
}
