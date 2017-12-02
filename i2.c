/* ssssssssssssssss program for factorial ssssssssssssssssssssss*/





#include<stdio.h>
void main()
{
int f=1,n,i;
printf("enter the no.to calculate its factorial=");
scanf("%d",&n);
for(i=n;i>0;i--)
{
f=f*i;
}
printf("display the factorial of %d=%d\n",n,f);
}

/* ssssssssssssss output ssssssssssssssssssssssss*/
enter the no.to calculate its factorial=5
display the factorial of 5=120
dell@dell-OptiPlex-7040:~$ ./a.out\
> 
enter the no.to calculate its factorial=6
display the factorial of 6=720
dell@dell-OptiPlex-7040:~$ 
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no.to calculate its factorial=10
display the factorial of 10=3628800
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no.to calculate its factorial=11
display the factorial of 11=39916800
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no.to calculate its factorial=24
display the factorial of 24=-775946240
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no.to calculate its factorial=40
display the factorial of 40=0
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no.to calculate its factorial=30
display the factorial of 30=1409286144
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no.to calculate its factorial=31
display the factorial of 31=738197504

