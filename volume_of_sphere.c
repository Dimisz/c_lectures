#include<stdio.h>
#define PI 3.14159


int main(void)
{
 double radius; // changed to double
 printf("Enter radius:"); //fixed quotes
 scanf("%lf", &radius); // fixed quotes and changed to lf to display double
 printf("volume is : %lf \n\n", 4 *radius*radius*radius/3 ); //fixed quotes + %lf instead of %d for double
return 0;
}
