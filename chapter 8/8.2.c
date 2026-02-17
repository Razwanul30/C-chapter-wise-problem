#include <stdio.h>
#include <string.h>

int main() {
  char answer[50];
  int attempts = 0;
  const char correct_answer= "Dennis Ritchie";
  printf("Who is the inventor of C?\n");
  while (attempts < 3) {
    printf("Your answer: ");
    fgets(answer, sizeof(answer), stdin);
    if (answer[strlen(answer) - 1] == '\n') {
      answer[strlen(answer) - 1] = '\0';
    }
    if (strcmp(answer, correct_answer) == 0) {
      printf("Good!\n");
      return 0;
    } else {
      printf("Try again.\n");
      attempts++;
    }
  }
  printf("The correct answer is: %s\n", correct_answer);
  return 0;
}
