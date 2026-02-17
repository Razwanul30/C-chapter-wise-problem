#include <stdio.h>

int main() {
  float a, b, c, d, m, n;
  float x1, x2;

  printf("Enter the coefficients and constants:\n");
  printf("a, b, m: ");
  scanf("%f %f %f", &a, &b, &m);
  printf("c, d, n: ");
  scanf("%f %f %f", &c, &d, &n);

  // Solve for x1 and x2 using Cramer's rule
  float determinant = a * d - b * c;

  if (determinant == 0) {
    printf("The system has no unique solution or infinitely many solutions.\n");
  } else {
    x1 = (m * d - b * n) / determinant;
    x2 = (a * n - m * c) / determinant;

    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
  }

  return 0;
}
