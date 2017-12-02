#include<stdio.h>
main()
{
int x,y,temp;
printf("Enter two number for swapping");
scanf("%d%d",&x,&y);
printf("numbers before swapping x=%d,y=%d",x,y);
temp=x;
x=y;
y=temp;
printf("number after swapping x=%d,y=%d",x,y);
}
