#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  
  printf("Enter a string: ");
  gets(str);
  
  printf("The length of the string is: %zu\n", strlen(str));
  
  return 0;
}