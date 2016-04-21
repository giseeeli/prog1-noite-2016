#include<stdio.h>
int main()
{
       float num1, num2, avg;
       printf("\nType two #'s");
       scanf("%f %f",&num1, &num2);
       avg=((num1+num2)/2);
       printf("\nThe average is: %.2f",avg);
       return 0;
}