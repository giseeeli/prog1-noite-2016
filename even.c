#include <stdio.h>
int main()
{
       int num;
       printf("\nWrite the number:");
       scanf("%d",&num);
       if(num%2==0)
       {
              printf("\nThis number is even.");
       }
       else
       {
              printf("\nThis number is odd.");
       }
       return 0;
}