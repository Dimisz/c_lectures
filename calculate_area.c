/* Oct 30, 2021
  Given radius the program calculates are
 */

#include <stdio.h>

#define PI 3.14159

int main(){
  double area = 0.0, radius = 0.0;
  
  printf("Enter radius:\n");
  scanf("%lf", &radius);
  area = PI * radius * radius;
  printf("Given radius of %lf the area would be: %lf", radius, area);
  
  return 0;
}
