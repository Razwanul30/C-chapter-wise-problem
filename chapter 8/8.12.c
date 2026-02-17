#include <stdio.h>
#include <string.h>

int main() {
  char text[1000], substring[50];
  char *ptr;
  int count = 0;
  printf("Enter a line of text: ");
  fgets(text, sizeof(text), stdin);
  if (text[strlen(text) - 1] == '\n') {
    text[strlen(text) - 1] = '\0';
  }
  printf("Enter the substring to search for: ");
  fgets(substring, sizeof(substring), stdin);
  if (substring[strlen(substring) - 1] == '\n') {
    substring[strlen(substring) - 1] = '\0';
  }
  ptr = text;
  while ((ptr = strstr(ptr, substring)) != NULL) {
    count++;
    ptr++;
  }
  printf("The number of occurrences of the substring is: %d\n", count);
  return 0;
}
