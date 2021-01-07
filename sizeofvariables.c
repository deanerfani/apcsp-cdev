#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));

  char  c = 'a';
  // print value and size of a char variable
  printf ("char c value : %c and size: %lu bytes\n", c, sizeof(c));

  float d = 13.345;
  // print value and size of a float variable
  printf("float d value : %f and size: %lu bytes\n", d, sizeof(d));

  double b = 332.322
  // print value and size of a double variable
  printf("double b value : %f and size: %lu bytes\n", b, sizeof(b));
 
  short int j = 122;
  // print value and size of an int variable
  printf("short int j value : %d and size: %lu bytes\n", j, sizeof(j));

  unsigned int i = 8;
  // print value and size of an int variable
  printf("unsigned int i value : %d and size %lu bytes\n", i, sizeof(i));
}

