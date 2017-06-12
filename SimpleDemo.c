#include <stdio.h>
#include <stdlib.h>

int add(int x, int y)
{
  int z = 10;

  z = x + y;
  return z;
}

main(int argc, char **argv)
{
  if (argc < 3) {
    puts("You need to pass 2 numbers as parameters.");
    exit(0);
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c;
  char buffer[100];

  gets(buffer);
  puts(buffer);

  c = add(a, b);

  printf("Sum of %d+%d = %d\n", a, b, c);

  exit(0);
}

