#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// function prototype
int simulateRouletteThrow();


int main () {
    int choice, numberOfThrows;
    int evenCount = 0, oddCount = 0, zeroCount= 0;

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
                {
                    int result = simulateRouletteThrow();
                    printf("Thrown number: %d\n", result);

                    if (result == 0) {
                        printf("The number is ZERO! Try again!\n");
                    } else if (result % 2 == 0) {
                        printf("The number is black.\n");
                    } else {
                        printf("The number is red.\n");
                    }
                }
                break;
        case 2:
                printf("How many throws would you like to simulate?\n");
                if (scanf("%d", &numberOfThrows) != 1) {
                    while (getchar() != '\n');
                    printf("Invalid input. Please enter a number.\n");
                    continue;
                }
                for (int i = 0; i < numberOfThrows; i++) {
                    int result = simulateRouletteThrow();
                    printf("Throw number %d, result: %d", i + 1, result);
                    if (result == 0) {
                        printf(" ZERO!\n");
                        zeroCount++;
                    } else if (result % 2 == 0) {
                        printf(" Black!\n");
                        evenCount++;
                    } else {
                        printf(" Red!\n");
                        oddCount++;
                    }
                }
                printf("---Throws statistics---\n 1)Black throws: %d.\n 2)Red throws: %d.\n 3)Number of zeroes: %d.\n", evenCount, oddCount, zeroCount);
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

int simulateRouletteThrow() {
    return  rand() % 37;

}
