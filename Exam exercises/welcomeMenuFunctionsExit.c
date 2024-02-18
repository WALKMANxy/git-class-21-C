#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Function prototypes
int sum(int a, int b);
int subtract(int a, int b);
double divide(int a, int b);
int multiply(int a, int b);
int generateRandomNumber();
void fibonacciSequence(int n);



int main() {
    int choice, a, b, n;

    printf("Welcome to the program!\n Choose an option from the menu by inputting a number, or quit!\n");

    while (choice != 7) {
        printf("\nMain Menu:\n");
        printf("1. Sum two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Multiply two numbers\n");
        printf("4. Divide two numbers\n");
        printf("5. Generate random number\n");
        printf("6. Fibonacci sequence\n");
        printf("7. Exit the program\n");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue; 
        }

        switch (choice) 
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Sum: %d\n", sum(a, b));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Difference: %d\n", subtract(a, b));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %f\n", divide(a, b));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result: %d\n", multiply(a, b));
                break;
            case 5:
                printf("Random number: %d\n", generateRandomNumber());
                break;
            case 6:
                printf("Enter a number to find the Fibonacci sequence: ");
                scanf("%d", &n);
                fibonacciSequence(n);
                break;
            case 7:
                printf("Exiting the program, thank you!");
                break;
            default:
                printf("Invalid choice, pick a function from the menu.\n");
                break;
                
        }

    } 

    return 0;

}

//function definitions:

int sum(int a, int b) {
    return a + b;
};

int subtract(int a, int b) {
    return a - b;
};

int multiply(int a, int b){
    return a * b;
};

double divide(int a, int b){
    if (b == 0){
        printf("Cannot divide by 0");
    }
    return (double)a / b;
};

int generateRandomNumber() {
    srand(time(NULL));
    return rand() % 37;
};

void fibonacciSequence(int n) {

    if (n < 0) {
        printf("Invalid input, please enter a non-negative number that fits inside a C 'int'.\n");
        return;
    }
    
    int a = 0, b = 1, next;

    printf("Fibonacci sequence up to %d: ", n);

    if (n >= 1) {
        printf("%d", a);
    }

    if (n >= 2){
        printf("%d", b);
    }
        for (int i = 2; a + b <= n; i++) {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    };
    
    printf("\n");

    return;
};