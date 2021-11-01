#include <stdio.h>
#include <math.h>

int main(){
  double x, result;
  
  printf("Enter a value between 0 and 1: ");
  scanf("%lf", &x);
  
  result = sin(x);
  printf("The sine of %lf is %lf", x, result);
  
  
  return 0;
}
