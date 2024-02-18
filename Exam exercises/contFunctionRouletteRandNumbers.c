#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// function prototype
void simulateRouletteThrow();


int main () {
    int choice, numberOfThrows;

    srand(time(NULL) ^ (getpid() << 16));

    printf("Welcome to the Roulette simulator!\n");
    printf("Press 1 to simulate a throw, 2 to simulate multiple throws, or 3 to exit.\n");

    while (choice != 3) {
        printf("\n Main Menu\n");
        printf("1. Simulate a throw\n");
        printf("2. Simulate multiple throws\n");
        printf("3. Exit the program.\n");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue; 
        }

        switch (choice)
      {

        case 1: 
            simulateRouletteThrow();
            break;
        case 2:
            printf("How many throws would you like to simulate?\n");
            if (scanf("%d", &numberOfThrows) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue; 
        }
            for (int i = 0; i < numberOfThrows; i++) {
                printf("Throw number %d\n", i + 1);
                simulateRouletteThrow();
            }
            break;
        case 3:
            printf("Exiting the program, thank you!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
      } 

    
    }
    
    return 0;

}

//function definition

void simulateRouletteThrow() {
    int randomNumber = rand() % 37;

    printf("Thrown number: %d\n", randomNumber);


    if (randomNumber == 0) {
        printf("The number is ZERO! Try again!\n");
    }
    else if (randomNumber % 2 == 0) {
        printf("The number is even.\n");
    }
    else {
        printf("The number is odd.\n");
    }
}
