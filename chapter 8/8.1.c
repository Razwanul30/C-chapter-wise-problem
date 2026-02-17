#include <stdio.h>
#include <string.h>

int main() {
  char name[100];
  int i;
  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  if (name[strlen(name) - 1] == '\n') {
    name[strlen(name) - 1] = '\0';
  }
  printf("ASCII codes for your name:\n");
  for (i = 0; name[i] != '\0'; i++) {
    printf("%c: %d\n", name[i], name[i]);
  }
  return 0;
}
