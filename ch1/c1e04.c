#include <stdio.h>

main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  celsius = lower;

  printf("%3s\t%6s\n", "C", "F");
  while( celsius <= upper ) {
    fahr = (9.0/5.0) * (celsius+32);
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}