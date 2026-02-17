#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[100];
  int left, right;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  if (str[strlen(str) - 1] == '\n') {
    str[strlen(str) - 1] = '\0';
  }
  left = 0;
  right = strlen(str) - 1;
  while (left < right) {
    if (!isalnum(str[left])) {
      left++;
      continue;
    }
    if (!isalnum(str[right])) {
      right--;
      continue;
    }
    if (tolower(str[left]) != tolower(str[right])) {
      printf("'%s' is not a palindrome.\n", str);
      return 0;
    }
    left++;
    right--;
  }
  printf("'%s' is a palindrome.\n", str);
  return 0;
}
