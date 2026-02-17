#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  int result, i = 0;
  printf("Enter the first string: ");
  fgets(str1, sizeof(str1), stdin);
  if (str1[strlen(str1) - 1] == '\n') {
    str1[strlen(str1) - 1] = '\0';
  }
  printf("Enter the second string: ");
  fgets(str2, sizeof(str2), stdin);
  if (str2[strlen(str2) - 1] == '\n') {
    str2[strlen(str2) - 1] = '\0';
  }
  while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0') {
    i++;
  }
  if (str1[i] == str2[i]) {
    result = 0;
  } else if (str1[i] < str2[i]) {
    result = -1;
  } else {
    result = 1;
  }
  if (result == 0) {
    printf("The two strings are equal.\n");
  } else if (result < 0) {
    printf("The first string is less than the second string.\n");
  } else {
    printf("The first string is greater than the second string.\n");
  }
  return 0;
}
