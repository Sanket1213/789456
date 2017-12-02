/* ********* program for volume of cube****************** */





#include<stdio.h>
void main()
{
float a;
float surface_area,volume;
printf("enter size of any side of a cube:");
scanf("%f",&a);
surface_area=6*(a*a);
volume=a*a*a;
printf("surface area of a cube is:%.3f",surface_area);
printf("\nvolume of cube is:%.3f",volume);
}



/* ******** output ********** */
dell@dell-OptiPlex-7040:~$ gcc p17.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter size of any side of a cube: 65
surface area of a cube is:25350.000
volume of cube is:274625.000dell@dell-OptiPlex-7040:~$ 


