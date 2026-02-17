#include <stdio.h>
#include <string.h>

int main() {
  char str[100];
  int i, j, len;
  char temp;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  if (str[strlen(str) - 1] == '\n') {
    str[strlen(str) - 1] = '\0';
  }
  len = strlen(str);
  for (i = 0; i < len - 1; i++) {
    for (j = 0; j < len - i - 1; j++) {
      if (str[j] > str[j + 1]) {
        temp = str[j];
        str[j] = str[j + 1];
        str[j + 1] = temp;
      }
    }
  }
  printf("Sorted string: %s\n", str);
  return 0;
}
