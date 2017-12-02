 #include<stdio.h>
 main()
{
int number,temp,remainder,result=0;
printf("enter the number");
scanf("%d",&number);
temp=number;
while(temp!=0)
{
remainder=temp%10;
result=result+(remainder*remainder*remainder);
temp=temp/10;
}
if(number==result)
printf("it is armstrong no.\n");
else
printf("it is not armstrong no.\n");
}


