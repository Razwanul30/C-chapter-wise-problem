#include <stdio.h>
#include <string.h>

int main() {
  char text[1000], ch;
  int count = 0, i;
  
  printf("Enter a line of text: ");
  gets(text);

  printf("Enter the character to count: ");
  scanf(" %c", &ch);
  
  for (i = 0; text[i] != '\0'; i++) {
    if (text[i] == ch) {
      count++;
    }
  }

  printf("The number of occurrences of '%c' is: %d\n", ch, count);
  return 0;
}