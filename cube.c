#include<stdio.h>
int main()
{
int s,a,p,ta,v;
printf("ENTER THE SIDE OF CUBE\n");
scanf("%d",&s);
a=s*s;
p=4*s;
ta=6*s*s;
v=s*s*s;
printf("THE AREA OF ONE SIDE OF CUBE IS=%d\n",a);
printf("THE PERIMETER OF ONE SIDE OF CUBE IS=%d\n",p);
printf("THE TOTAL AREA OF CUBE IS=%d\n",ta);
printf("THE VOLUME OF CUBE IS=%d\n",v);
return 0;
}
