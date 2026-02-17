#include <stdio.h>
#include <string.h>

int main() {
    char text[1000], old_word[50], new_word[50], new_text[1000];
    int i = 0, j = 0, k, old_len, new_len;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);
    if (text[strlen(text) - 1] == '\n') text[strlen(text) - 1] = '\0';

    printf("Enter the word to replace: ");
    scanf("%s", old_word);
    printf("Enter the new word: ");
    scanf("%s", new_word);

    old_len = strlen(old_word);
    new_len = strlen(new_word);

    while (text[i] != '\0') {
        if (strncmp(&text[i], old_word, old_len) == 0 &&
            (i == 0 || text[i - 1] == ' ') &&
            (text[i + old_len] == ' ' || text[i + old_len] == '\0' || text[i + old_len] == '.' || text[i + old_len] == ',')) {
            for (k = 0; k < new_len; k++) new_text[j++] = new_word[k];
            i += old_len;
        } else {
            new_text[j++] = text[i++];
        }
    }
    new_text[j] = '\0';

    printf("Modified text: %s\n", new_text);
    return 0;
}