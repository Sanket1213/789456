/* ********* program for swpping for two number ********* */





#include<stdio.h>
int main()
{
int first_no,second_no,temp;
 printf("enter the value of first_no and second_no\n");
 scanf("%d%d",&first_no,&second_no);
printf("before swapping\nfirst_no=%d\nsecond_no=%d\n",first_no,second_no);
temp=first_no;
first_no=second_no;
second_no=temp;
printf("after swapping\nfirst_no=%d\nsecond_no=%d\n",first_no,second_no);
}



/* ************ output ***********
enter the value of first_no and second_no
54 87
before swapping
first_no=54
second_no=87
after swapping
first_no=87
second_no=54
*/










