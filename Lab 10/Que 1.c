#include<stdio.h>
#include<math.h>



float* circleData(float radius){

        float pi,*ptr;

        float data[2];
        pi=3.14159;


        ptr=data;       //giving address to pointer
        
        data[0]=pi*2.0*radius;
        data[1]=pi*pow(radius,2);

        return ptr; //returning address of pointer

}

void main(){

        float area,rad; 
float *perimeter;
         
        printf("Enter the radius : ");
        scanf("%f",&rad);
    
        perimeter=circleData(rad);
        area=*(perimeter+1);
        printf("The perimeter and area of given circle is : %.2f and %.2f\n",*perimeter,area);
        
}
