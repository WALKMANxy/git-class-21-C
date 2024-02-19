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
void bmiCalculator(int weight, float height);
float dailyKcalIntakeCalculator(int sex, float weight);
float accurateDailyKcalIntakeCalculator(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithWeightVariation(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithRandomWeightHeightAge(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithFixedWeightRandomHeightRandomAge(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithFixedWeightFixedHeightRandomAge(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithRandomWeightFixedHeightRandomAge(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithRandomWeightRandomHeightFixedAge(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithRandomWeightFixedHeightFixedAge(int sex, float weight, int height, int age);
void simulateDailyIntakeFormulasWithFixedWeightRandomHeightFixedAge(int sex, float weight, int height, int age);

int main()
{
    int choice, a, b, n, sex, age;
    float height, weight;
    srand(time(NULL));

    printf("Welcome to the program!\n Choose an option from the menu by inputting a number, or quit!\n");

    while (choice != 11)
    {
        printf("\nMain Menu:\n");
        printf("1. Sum two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Multiply two numbers\n");
        printf("4. Divide two numbers\n");
        printf("5. Generate random number\n");
        printf("6. Fibonacci sequence\n");
        printf("7. BMI calculator.\n");
        printf("8. Daily kilocalories intake calculator.\n");
        printf("9. Accurate daily kilocalories intake calculator.\n");
        printf("10. Simulate the previous two formuals with random values variations.\n");
        printf("11. Exit the program\n");

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
            printf("Please input your height:\n");
            scanf("%f", &height);
            printf("Please input your weight:\n");
            scanf("%f", &weight);
            bmiCalculator(weight, height);
            break;
        case 8:
            printf("Please input your sex (1 for Male, 2 for Female):\n");
            scanf("%d", &sex);
            printf("Please input your weight:\n");
            scanf("%f", &weight);
            dailyKcalIntakeCalculator(sex, weight);
            break;
        case 9:
            printf("Please input your sex (1 for Male, 2 for Female):\n");
            scanf("%d", &sex);
            printf("Please input your weight:\n");
            scanf("%f", &weight);
            printf("Please input your height in centimeters:\n");
            scanf("%g", &height);
            printf("Please input your age:\n");
            scanf("%d", &age);
            accurateDailyKcalIntakeCalculator(sex, weight, height, age);
            break;
        case 10:
        {
            int variationChoice;
            printf("Choose the data variation:\n");
            printf("1. Random Weight variation\n");
            printf("2. Random weight, height, and age variation\n");
            printf("3. Fixed weight, random height, and random age variation\n");
            printf("4. Fixed weight, fixed height, and random age variation\n");
            printf("5. Random weight, fixed height, and random age variation\n");
            printf("6. Random weight, random height, and fixed age variation\n");
            printf("7. Random weight, fixed height, and fixed age variation\n");
            printf("8. Fixed weight, random height, and fixed age variation\n");

            scanf("%d", &variationChoice);

            switch (variationChoice)
            {
            case 1:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithWeightVariation(sex, weight, height, age);
                break;
            case 2:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithRandomWeightHeightAge(sex, weight, height, age);
                break;
            case 3:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithFixedWeightRandomHeightRandomAge(sex, weight, height, age);
                break;
            case 4:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithFixedWeightFixedHeightRandomAge(sex, weight, height, age);
                break;
            case 5:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithRandomWeightFixedHeightRandomAge(sex, weight, height, age);
                break;
            case 6:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithRandomWeightRandomHeightFixedAge(sex, weight, height, age);
                break;
            case 7:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithRandomWeightFixedHeightFixedAge(sex, weight, height, age);
                break;
            case 8:
                printf("Please input your sex (1 for Male, 2 for Female):\n");
                scanf("%d", &sex);
                printf("Please input your weight:\n");
                scanf("%f", &weight);
                printf("Please input your height in centimeters:\n");
                scanf("%g", &height);
                printf("Please input your age:\n");
                scanf("%d", &age);
                simulateDailyIntakeFormulasWithFixedWeightRandomHeightFixedAge(sex, weight, height, age);
                break;
            case 9:
                printf("Going back to the previous menu\n");
            default:
                printf("Invalid choice. Please choose a number between 1 and 8..\n");
                break;
            }
            return 0;
            break;
        }

        case 11:
            printf("Exiting the program, thank you!\n");
            break;

        default:
            printf("Invalid choice, pick a function from the menu.\n");
            break;
        }
    }

    return 0;
}

// function definitions:

int sum(int a, int b)
{
    return a + b;
};

int subtract(int a, int b)
{
    return a - b;
};

int multiply(int a, int b)
{
    return a * b;
};

double divide(int a, int b)
{
    if (b == 0)
    {
        printf("Cannot divide by 0");
    }
    return (double)a / b;
};

int generateRandomNumber()
{
    return rand() % 37;
};

void fibonacciSequence(int n)
{

    if (n < 0)
    {
        printf("Invalid input, please enter a non-negative number that fits inside a C 'int'.\n");
        return;
    }

    int a = 0, b = 1, next;

    printf("Fibonacci sequence up to %d: ", n);

    if (n >= 1)
    {
        printf("%d", a);
    }

    if (n >= 2)
    {
        printf("%d", b);
    }
    for (int i = 2; a + b <= n; i++)
    {
        next = a + b;
        printf(", %d", next);
        a = b;
        b = next;
    };

    printf("\n");

    return;
};

void bmiCalculator(int weight, float height)
{
    if (height > 3)
    {
        height /= 100;
    }

    float bmi = (float)weight / (height * height);

    if (bmi <= 18.5)
    {
        printf("You are underweight. Low risk of weight-related diseases\n");
    }
    else if (bmi <= 25)
    {
        printf("You are in the regular range of BMI, medium risk of weight-related diseases\n");
    }
    else if (bmi <= 30)
    {
        printf("You are overweight, increased risk of weight-related diseases\n");
    }
    else if (bmi <= 35)
    {
        printf("You are suffering from class 1 obesity, moderate risk of weight-related diseases\n");
    }
    else if (bmi <= 40)
    {
        printf("You are suffering from class 2 obesity, high risk of weight-related diseases\n");
    }
    else
    {
        printf("You are suffering from class 3 obesity, very high risk of weight-related diseases\n");
    }
    printf("The inputted height is %g, and the inputted weight is %d.\nYour BMI is: %g\n", height, weight, bmi);
}

float dailyKcalIntakeCalculator(int sex, float weight)
{
    float kcalNeedsA = 0;
    if (sex == 1)
    {
        kcalNeedsA = weight * 33;
        printf("Based on the 'weight * 33' formula, your daily kcal intake should be: %g\n", kcalNeedsA);
    }
    else
    {
        kcalNeedsA = weight * 31;
        printf("Based on the 'weight * 31' formula, your daily kcal intake should be: %g\n", kcalNeedsA);
    }
    return kcalNeedsA;
}

float accurateDailyKcalIntakeCalculator(int sex, float weight, int height, int age)
{
    float kcalNeedsB = 0;
    if (sex == 1)
    {
        kcalNeedsB = (10 * weight + 6.25 * height - 5 * age + 5) * 1.2;
        printf("Based on the '10 * weight + 6.25 * height - 5 * age + 5' formula, your daily kcal intake should be: %g\n", kcalNeedsB);
    }
    else
    {
        kcalNeedsB = (10 * weight + 6.25 * height - 5 * age - 161) * 1.2;
        printf("Based on the '10 * weight + 6.25 * height - 5 * age + 5' formula, your daily kcal intake should be: %g\n", kcalNeedsB);
    }
    return kcalNeedsB;
}

void simulateDailyIntakeFormulasWithWeightVariation(int sex, float weight, int height, int age)
{
    for (int i = -10; i <= 20; i++)
    {
        float randomWeight = weight + i;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, height, age);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, height, age);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithRandomWeightHeightAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = generateRandomNumber() % 25 + weight;
        int randomAge = generateRandomNumber() % 10 + age;
        int randomHeight = generateRandomNumber() % 25 + height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithFixedWeightRandomHeightRandomAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = weight;
        int randomAge = generateRandomNumber() % 10 + age;
        int randomHeight = generateRandomNumber() % 25 + height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithFixedWeightFixedHeightRandomAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = weight;
        int randomAge = generateRandomNumber() % 10 + age;
        int randomHeight = height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithRandomWeightFixedHeightRandomAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = generateRandomNumber() % 25 + weight;
        int randomAge = generateRandomNumber() % 10 + age;
        int randomHeight = height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithRandomWeightRandomHeightFixedAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = generateRandomNumber() % 25 + weight;
        int randomAge = age;
        int randomHeight = generateRandomNumber() % 25 + height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithRandomWeightFixedHeightFixedAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = generateRandomNumber() % 25 + weight;
        int randomAge = age;
        int randomHeight = height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}

void simulateDailyIntakeFormulasWithFixedWeightRandomHeightFixedAge(int sex, float weight, int height, int age)
{
    printf("\n---Simulating with random weight, random height, random age combinations---\n");
    for (int i = 0; i <= 5; i++)
    {
        float randomWeight = weight;
        int randomAge = age;
        int randomHeight = generateRandomNumber() % 25 + height;

        printf("\nSimulating for weight: %.2f, height: %d cm, age: %d years\n", randomWeight, randomHeight, randomAge);
        printf("Using dailyKcalIntakeCalculator:\n");
        float kcal1 = dailyKcalIntakeCalculator(sex, randomWeight);
        printf("Using accurateDailyKcalIntakeCalculator:\n");
        float kcal2 = accurateDailyKcalIntakeCalculator(sex, randomWeight, randomHeight, randomAge);

        printf("\n---Results---:\n");
        printf("Daily kcal intake using dailyKcalIntakeCalculator: %.2f\n", kcal1);
        printf("Daily kcal intake using accurateDailyKcalIntakeCalculator: %.2f\n", kcal2);

        // Calculate and print the median and difference
        float median = (kcal1 + kcal2) / 2;
        float difference = kcal1 - kcal2;

        printf("Median between the two formulas: %.2f\n", median);
        printf("Difference between the two formulas: %.2f\n", difference);
    }
}