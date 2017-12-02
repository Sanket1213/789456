//********************** programs **********************


#include<stdio.h>
int main()
{
 int first,second,add, subtract,multiply;
float divide;
 printf("enter two integers\n");
 scanf("%d%d",&first,&second);
 add=first+second;
 subtract=first-second;
 multiply=first*second;
 divide=first/(float)second;
 printf("sum=%d\n",add);
 printf("difference=%d\n",subtract);
 printf("multiplication=%d\n",multiply);
 printf("division=%.2f\n",divide);
}

/*
**************************output***************************
enter two integers
10 10 
sum=20
difference=0
multiplication=100
division=1.00
*/
