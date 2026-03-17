#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
int getGuess();
void printSuccess();
void printFailure(int number);
void printHint(int guess, int number);

int main() {
    // Student info
    printf("Name: Michael Selve\n");
    printf("Student ID: 240161\n");
    printf("Date: 18th March 2026\n\n");

    srand(time(0)); // Seed random number
    int number = rand() % 20 + 1; // Random between 1 and 20
    int guess;
    int attempts = 5;

    printf("I am thinking of a number between 1 and 20.\n");

    for (int i = 0; i < attempts; i++) {
        guess = getGuess();

        if (guess == number) {
            printSuccess();
            return 0; // terminate immediately
        } else {
            printHint(guess, number);
        }
    }

    // If all attempts fail
    printFailure(number);
    return 0;
}

// Function definitions
int getGuess() {
    int g;
    printf("Can you guess what it is? ");
    scanf("%d", &g);
    return g;
}

void printSuccess() {
    printf("Congratulations! You did it.\n");
}

void printFailure(int number) {
    printf("Sorry. The number was %d. You should have gotten it by now. Better luck next time.\n", number);
}

void printHint(int guess, int number) {
    if (guess < number) {
        printf("Your guess is low. Try again:\n");
    } else {
        printf("Your guess is high. Try again:\n");
    }
}
