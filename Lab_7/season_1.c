#include<stdio.h>

void main()
{
        int s;
        printf("Enter the month no. : ");
        scanf("%d",&s);
        if(s==12||s==1||s==2){
        printf("the season is Winter...\n");
        }

        else if(2<s && s<6){
        printf("the season is Spring...\n");
        }

        else if(5<s && s<9){
        printf("the season is Summer...\n");
        }

        else if(8<s && s<12){
        printf("the season is Autumn..\n");
        }

        else{
        printf("Enter valid season no. ...\n");
        }



}


