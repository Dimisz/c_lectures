#include <stdio.h>
// gives a warning 'extern var has an initializer'
extern int reps =0; // gloobal scope

void f(void)
{
  //local, but everytime it's called it's value equals to what it was
  //as a result of the last call
  static int called = 0;
  printf("f called %d\n", called);
  called++;
  reps = reps + called;
}

int main(void)
{
  auto int i = 1;
  const int Limit = 10;
  for (i = 1; i < Limit; i++){
    printf("i local = %d, reps global =%d\n", i, reps);
    f();
  }
}
