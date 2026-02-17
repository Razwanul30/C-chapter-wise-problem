#include <stdio.h>
#include <string.h>

int main() {
  char s1[100], s2[100];
  int m, n, i, j;
  printf("Enter the source string (s1): ");
  gets(s1);
  printf("Enter the number of characters to copy (m): ");
  scanf("%d", &m);
  printf("Enter the starting position (n): ");
  scanf("%d", &n);
  n--;
  if (n < 0 || n >= strlen(s1) || m < 0 || n + m > strlen(s1)) {
    printf("Invalid input: Please check the values of m and n.\n");
    return 1;
  }
  for (i = n, j = 0; j < m; i++, j++) {
    s2[j] = s1[i];
  }
  s2[m] = '\0';
  printf("Copied string (s2): %s\n", s2);
  return 0;
} 