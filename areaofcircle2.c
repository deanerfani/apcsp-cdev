include <stdio.h> 
#include <math.h>
#include <time.h>
#include <stdlib.h>
// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  }
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
int areaOfCircle(float radius)
{
        float square = radius * radius;
        float temp = (square *  M_PI);
        return temp;
}

int main(int argc, char* argv[]) 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start = 5.2;
  int reps = 3;
  
  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", start, start+reps-1);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
char a[10];
char b[10];

    printf("Lower range of radius: \n");
    fgets(a, 10, stdin);
    printf("Upper range of radius: \n"); 
    fgets(b, 10, stdin);

int num1 = strtol(a, NULL, 10);
int num2 = strtol(b, NULL, 10);
    printf("%d\n", num1);
    printf("%d\n", num2);
for(int i = num1; i < (num2 + 1); i++){

   printf("the area of radius %d  =  %d\n", i, areaOfCircle(i));

}










