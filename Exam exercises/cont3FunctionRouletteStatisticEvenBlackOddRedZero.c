#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// function prototype
int simulateRouletteThrow();
void simulateSingleThrow();
void simulateMultipleThrows();
void displayStatistics(int blackCount, int redCount, int zeroCount, int totalCount);

int main()
{
    int choice;

    srand(time(NULL) ^ (getpid() << 16));

    printf("Welcome to the Roulette simulator!\n");
    printf("Press 1 to simulate a throw, 2 to simulate multiple throws, or 3 to exit.\n");

    while (choice != 3)
    {
        printf("\n Main Menu\n");
        printf("1. Simulate a throw\n");
        printf("2. Simulate multiple throws\n");
        printf("3. Exit the program.\n");

        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            simulateSingleThrow();
            break;
        case 2:
            simulateMultipleThrows();
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

// function definition

int simulateRouletteThrow()
{
    return rand() % 37;
}

void simulateSingleThrow()
{
    int result = simulateRouletteThrow();
    printf("Thrown number: %d\n", result);

    if (result == 0)
    {
        printf("The number is ZERO! Try again!\n");
    }
    else if (result % 2 == 0)
    {
        printf("The number is black.\n");
    }
    else
    {
        printf("The number is red.\n");
    }
}

void simulateMultipleThrows()
{
    int numberOfThrows, blackCount = 0, redCount = 0, zeroCount = 0;
    printf("How many throws would you like to simulate?\n");
    if (scanf("%d", &numberOfThrows) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Invalid input. Please enter a number.\n");
        return;
    }

    
    for (int i = 0; i < numberOfThrows; i++)
    {
        int result = simulateRouletteThrow();
        printf("Throw number %d, result: %d", i + 1, result);
        if (result == 0)
        {
            printf(" ZERO!\n");
            zeroCount++;
        }
        else if (result % 2 == 0)
        {
            printf(" Black!\n");
            blackCount++;
        }
        else
        {
            printf(" Red!\n");
            redCount++;
        }
    }
    displayStatistics(blackCount, redCount, zeroCount, numberOfThrows);
}

void displayStatistics(int blackCount, int redCount, int zeroCount, int numberOfThrows)
{
    float blackPercentage = (float)blackCount / numberOfThrows * 100;
    float redPercentage = (float)redCount / numberOfThrows * 100;
    float zeroPercentage = (float)zeroCount / numberOfThrows * 100;
    printf("---Throws statistics---\n 1)Black throws: %d (%.2f%%).\n 2)Red throws: %d (%.2f%%).\n 3)Number of zeroes: %d (%.2f%%).\n", blackCount, blackPercentage, redCount, redPercentage, zeroCount, zeroPercentage);
}