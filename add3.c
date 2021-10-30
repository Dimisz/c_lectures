#include<stdio.h>

int main(){
  int a, b, c, sum;
  
  printf("Enter three integers:\n");
  scanf("%d%d%d", &a, &b, &c);
  sum =  a + b + c;
  printf("The sum of %d, %d and %d added is %d.\n", a, b, c, sum);
  
  return 0;
}

