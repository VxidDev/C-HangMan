#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(NULL));

    char words[25][20];
    char selectedWord[20];
    char guessedWord[20];
    int attempts = 5;
    
    const char *source[] = {
        "python", "keyboard", "computer", "variable", "function",
        "hangman", "planet", "galaxy", "matrix", "network",
        "internet", "science", "battery", "puzzle", "gravity",
        "window", "shadow", "crystal", "signal", "memory",
        "storage", "cipher", "library", "element", "quantum"
    };

    for (int i = 0; i < 25; i++) {
        strcpy(words[i] , source[i]);
    }

    strcpy(selectedWord, words[rand() % 25]);
    
    for (int i = 0; i < strlen(selectedWord); i++) {
        guessedWord[i] = '_';
    }

    guessedWord[strlen(selectedWord)] = '\0';

    printf("Welcome to hangman game!\n");
    
    while (attempts > 0){
        char letter[3];

        printf("Enter letter: ");
        fgets(letter , 3 , stdin);

        if (strchr("abcdefghijklmnopqrstuvwxyz", letter[0]) == NULL) {
            continue; 
        }

        int letterOccurs = 0;
        for (int i = 0; i < strlen(selectedWord); i++) {
            if (selectedWord[i] == letter[0]) {
                guessedWord[i] = letter[0];
                letterOccurs++;
            }
        }

        if (letterOccurs == 0) {
            attempts--;
            printf("No letter occurences! %i attempts left!\n" , attempts);
        } else {
            printf("%i letter occurences!\n" , letterOccurs);
        }

        if (strcmp(selectedWord , guessedWord) == 0) {
            printf("You Win! The word is: %s\n" , selectedWord);
            return 0;
        } else {
            printf("\nGuessed word: %s\n" , guessedWord);
        }
    }
    
    printf("\nYou Lose! The word was: %s\n" , selectedWord);

    return 0;
}