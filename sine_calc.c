#include <stdio.h>
#include <math.h> //We'll use the sine function from math module

int main(){
  double user_num, result; //declaring the variables we'll use
  
  printf("Enter a value between 0 and 1: ");
  scanf("%lf", &user_num); //user input stored in user_num variable
  
  result = sin(user_num); //sine calculated using the user input
  printf("The sine of %lf is %lf", user_num, result);
  
  
  return 0;
}
