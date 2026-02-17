#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "123456789";
  int i, j, k, len;
  len = strlen(str);
  for (i = 0; i < len; i++) {
    for (j = 0; j < len - i - 1; j++) {
      printf(" ");
    }
    for (j = 0; j <= i; j++) {
      printf("%c", str[j]);
    }
    for (j = i - 1; j >= 0; j--) {
      printf("%c", str[j]);
    }
    printf("\n");
  }
  return 0;
}