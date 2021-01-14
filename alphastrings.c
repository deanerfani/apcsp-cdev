#include <stdio.h>
#include <string.h>

int main() {

char str1[27];
for (int i=0; i<26;i++){
    str1[i] = 'a' + i;
}
char str2[] = "abcdefghijklmnopqrstuvwxyz\n";

if (strcmp(str1, str2) == 0 ){
   printf("str1 and str2 are not identical\n");
}

for(int i=0;i<27;i++){
  str2[i] -= 32;
}

if (strcmp(str1,str2) == 0) {
   printf("str1 and str2 are identical\n");
} else {
  printf("str1 and str2 are different\n");
}
char str3[54];

strcpy(str3, str1);
strcat(str3, str2);

printf("str1: %s\n", str1);
printf("str2: %s\n", str2);
printf("str3: %s\n", str3);

}
