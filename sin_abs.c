#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{
double interval;
int i;
for(i = 0; i <30; i++)
{
 interval = i/10.0;
// fabs() should be used instead of abs()
// since abs is used with integers, fabs - with floats
// we have floats here
 printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
}


printf("\n+++++++\n"); //fixed the quotes
return 0;
}
