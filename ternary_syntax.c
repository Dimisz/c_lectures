#include <stdio.h>

int main(){
  int speed;
  printf("\nEnter your speed as an integer:");
  scanf("%d", &speed);
  //pay attention here
  speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
  // pay attention above
  switch(speed){
    case 65: printf("\nNo speeding ticket\n\n"); break;
    case 70: printf("\nSpeeding ticket\n\n"); break;
    case 90: printf("\nExpensive speeding ticket\n\n"); break;
    default: printf("\nIncorrect speed\n\n");
  }
  return 0;
}
