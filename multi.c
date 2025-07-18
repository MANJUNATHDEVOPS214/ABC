#include <stdio.h> // Required for input/output functions like printf and scanf

int main() {
    int num1, num2, product; // Declare integer variables to store the numbers and their product

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    // Read the first integer from the user and store it in num1
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    // Read the second integer from the user and store it in num2
    scanf("%d", &num2);

    // Calculate the product of num1 and num2 and store it in the product variable
    product = num1 * num2;

    // Display the result to the user
    printf("The product of %d and %d is %d\n", num1, num2, product);

    return 0; // Indicate successful program execution
}
