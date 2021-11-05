/*
 Written by V.Solovyov
 Nov 5, 2021
 */

#include <stdio.h>
#include <math.h> //We'll use the sine and cosine functions from math module

int main(){
/*
 - Start with 0 (assigned to i)
 - With each iteration i is incremented by 0.1
 - Sine and cosine values are printed out for each value of i
 */

  for(double i=0; i <= 1; i+=0.1){
    printf("Sine of %lf is: %lf\t Cosine of %lf is: %lf\n", i, sin(i), i, cos(i));
  }
  
  return 0;
}
