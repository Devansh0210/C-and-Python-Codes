include<stdio.h>
#include<string.h>

typedef struct{

        char name[15];
        int roll;

}INFO;  // structure named "INFO" of student's information i.e. roll no. and name

void main(){

        FILE* fp;
        fp=fopen("output.txt","w"); //opens the file

        int N;

        printf("Enter the no. of students : ");

        scanf("%d",&N); //takes no. of students

        INFO stud[N]; // makes the array of structures

        for(int i=0;i<N;i++){
                printf("Enter the roll no. : ");
                scanf("%d",&stud[i].roll);
                fprintf(fp,"Roll no. of the student is : %d\n",stud[i].roll); // writes roll no. in file

                printf("Enter the name : ");
                scanf("%s",stud[i].name);
                fprintf(fp,"Name of the student is : %s\n",stud[i].name);  // writes name in the opened f

        }

/*      for(int i=0;i<N;i++){
                        printf("%d %s\n",stud[i].roll,stud[i].name);                    
                }
                   */

        fclose(fp); // closes the file

        char buf[256];
        fp=fopen("output.txt","r");

        while(!feof(fp)){
                fgets(buf,100,fp);
                printf("%s",buf);
                strcpy(buf,"");
                }
//      printf("%s",s);
//      printf("%s",buf);
        fclose(fp);
}
 
