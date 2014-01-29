#include <stdio.h>

#define   LOWER   -100    // Lower Limit of a table
#define   UPPER   300     // Upper limit of the table
#define   STEP    20      // Step decrease

main()
{
  int fahr;

  printf("%3s\t%6.1s\n", "F", "C"); // Headers
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-20));
}