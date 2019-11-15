include<stdio.h>
int hailstones(int val){

        int count=0,term;


          for (term = val; term != 1; )
         {
                if (term % 2 == 0)
                term = term / 2;
          else
                term = (3 * term) + 1;
          printf("%d ", term);
          count++;
  }
        printf("\n");

        printf("%d\n",count);
        return count;
}

void main(){

        int value;
        printf("Enter the value :  ");
        scanf("%d",&value);
        hailstones(value);
//      printf("\n The no. of terms in sequence is %d",hailstones(value));


}
