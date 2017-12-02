/* ******* program for perfect no ********* */



#include<stdio.h>
int main()
{
int number,integer=1,sum_of_divisor=0;
 printf("enter a number:");
scanf("%d",&number);
while(integer<number){
 if(number% integer==0)
 sum_of_divisor= sum_of_divisor+integer;
 integer++;
}
if(sum_of_divisor==number)
printf("%d is a perfect number",integer);
else
printf("%d is not a perfect numer",integer);
return 0;
}
  
/* **************** output *********** 
enter a number: 6
6 is a perfect numberdell@dell-OptiPlex-7040:~$ ./a.out
enter a number:28
28 is a perfect numberdell@dell-OptiPlex-7040:~$ ./a.out
enter a number:496
496 is a perfect numberdell@dell-OptiPlex-7040:~$ 
*/

