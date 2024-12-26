#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_TRIES 6

int i;

struct WordWithHint { char *word, *hint; };

int main() {
    srand(time(NULL));
    struct WordWithHint words[] = {
        {"geeksforgeeks", "Computer coding"},
        {"elephant", "A large mammal with a trunk"},
        {"pizza", "A popular Italian dish"},
        {"beach", "Sandy shore by the sea"}
    };
    char guessed[26] = {0}, guess, *word = words[rand() % 4].word;
    int len = strlen(word), tries = 0, correct = 0;

    printf("Hint: %s\n", words[rand() % 4].hint);
    while (tries < MAX_TRIES && correct < len) {
        printf("Word: ");
        for (i = 0; i < len; i++) printf("%c ", guessed[word[i] - 'a'] ? word[i] : '_');
        printf("\nRemaining chances: %d\n", MAX_TRIES - tries);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess);
        if (guess < 'a' || guess > 'z' || guessed[guess - 'a']) continue;
        guessed[guess - 'a'] = 1;
        int found = 0;
        for (i = 0; i < len; i++) found += word[i] == guess;
        correct += found;
        tries += !found;
        printf(found ? "Good guess!\n" : "Wrong guess!\n");
    }
    printf(correct == len ? "\nYou won! Word: %s\n" : "\nYou lost! Word: %s\n", word);
    return 0;
}

