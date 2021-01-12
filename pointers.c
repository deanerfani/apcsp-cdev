#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", (void*)ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", (void*)&a);
}

float d = 2.468;
float* ptrtod = &d;

printf("The value of d is %f\n", d);
printf("The address of d is %p\n",&d);

float e = 3.759;
float* ptrtoe = &e;

printf("The value of d is %f\n", e);
printf("The value of e is %p\n", &e);

float t = *ptrtoe;
e = d;
d = t;

printf("The value of e is %f an the value of and the value of d is %f\n", e, d);

} 

