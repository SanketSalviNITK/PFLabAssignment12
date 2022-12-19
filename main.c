#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char binIn[8];
  int sum = 0;
  printf("Input 8 bit binary string:");
  for (int i = 0; i < 8; i++) {
    scanf("%c", &binIn[i]);
  }
  printf("\nGiven binary string is:");
  printf("%s", binIn);
  for (int i = 8, j = 0; i >= 0; i--, j++) {
    if (binIn[i] == '1')
      sum = sum + pow(2, j - 1);
  }
  printf("\nConverted decimal number is:");
  printf("%d\n", sum);
  return 0;
}