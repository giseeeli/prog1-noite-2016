#include<stdio.h>

int main()
{
       int a, b; 
       int so, su, m; 
       float d;
       printf("\nDigite o primeiro número:\n");
       scanf("%d", &a);
       printf("\nDigite o segundo número:\n");
       scanf("%d", &b);
       so=a+b;
       su=a-b;
       m=a*b;
       d=(float)a/b;
       printf("\nA soma é: %d",so);
       printf("\nA subtração é: %d",su);
       printf("\nA multiplicação é: %d",m);
       printf("\nA divisão é: %.2f",d);
       return 0;
}
