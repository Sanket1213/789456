/* ********* program for area of circle****************** */



#include<stdio.h>
#include<math.h>
#define PI 3.412
int main()
{
float radius,area;
printf("enter the radius of a circle\n");
scanf("%f",&radius);
area=2*PI*radius;
printf("area of a circle=%5.2f\n",area);
}


/* ******** output **********
*/dell@dell-OptiPlex-7040:~$ gcc p15.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter the radius of a circle
53
area of a circle=361.67
*/

