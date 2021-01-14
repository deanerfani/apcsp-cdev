#include <stdio.h>



// student structure
//struct Student...

int getInputNumber()
{

   char input[256];
   int num;
   fgets(input, 256, stdin);
   return num;

}

struct Student {
      
      char firstname[50];
      char lastname[50];
      int age[10];
      long id[10]
}

void printStudent(struct Student* student)
{
printf("Student: %s %s\n", student -> firstname, student -> lastname);
printf("age: %d\n", student -> age);
printf("d:%d\n", student -> id);
}


void printAllStudents(struct Student students[], int num)
{
  // call printStudent for each student in students
}


for(int i = 0; i < num; i++){

   printf("\n--------------student %d------------------", i);
   printStuden(&students[i]);

}
}

int main()
{

  // an array of students
  //xxx students;

  int numStudents = 0;
  while (1)
  {
    char c;
    printf("\nEnter a to add, p to print, q to quit:");
    fgets(input, 256, stdin);
    if (sscanf(input, "%c", &c) != 1) continue;
    if (c == 'q') 
    {
      break;
    }
    else if (c == 'p')
    {
      // print all students
      printAllStudents(students, numStudents);
      continue;
    }
    else if (c == 'a')
    {
      // enter a new student
    
      numStudents++;
    }
  }
  
  printf("\nGoodbye!\n");
}
