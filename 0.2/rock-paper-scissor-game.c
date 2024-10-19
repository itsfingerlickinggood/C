#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    srand(time(0));
    computerChoice = rand() % 3 + 1;

    printf("Rock-Paper-Scissors\n");
    printf("ENTER YOUR CHOICE:\n1. Rock\n2. Paper\n3. Scissors\n");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid Choice!\n");
        return 1;
    }

    printf("Your choice is ");
    if (playerChoice == 1) printf("Rock\n");
    else if (playerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    printf("Computer's choice is ");
    if (computerChoice == 1) printf("Rock\n");
    else if (computerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    if (playerChoice == computerChoice) printf("It's a tie!\n");
    else if ((playerChoice == 1 && computerChoice == 3) || 
             (playerChoice == 2 && computerChoice == 1) || 
             (playerChoice == 3 && computerChoice == 2)) {
        printf("You win, Computer loses!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}

