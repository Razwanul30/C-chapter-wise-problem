#include <stdio.h>

int main() {
  int number;

  printf("Enter an integer: ");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("NUMBER IS EVEN\n");
  } 
  if (number % 2 != 0) {
    printf("NUMBER IS ODD\n");
  }

  return 0;
}
