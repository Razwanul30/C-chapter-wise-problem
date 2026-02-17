#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char text[1000], word[50];
  char *token;
  int count = 0;
  printf("Enter a text: ");
  fgets(text, sizeof(text), stdin);
  if (text[strlen(text) - 1] == '\n') {
    text[strlen(text) - 1] = '\0';
  }
  printf("Enter the word to count: ");
  scanf("%s", word);
  token = strtok(text, " \t\n.,!?");
  while (token != NULL) {
    char temp_token[50], temp_word[50];
    strcpy(temp_token, token);
    strcpy(temp_word, word);
    for (int i = 0; temp_token[i]; i++) {
      temp_token[i] = tolower(temp_token[i]);
    }
    for (int i = 0; temp_word[i]; i++) {
      temp_word[i] = tolower(temp_word[i]);
    }
    if (strcmp(temp_token, temp_word) == 0) {
      count++;
    }
    token = strtok(NULL, " \t\n.,!?");
  }
  printf("The number of occurrences of the word '%s' is: %d\n", word, count);
  return 0;
}
