#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

int main() {

    int choice;
    float num1, num2, result;

    do {
        
    printf("\n********* CALCULATOR *********\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Choose an operation (1-5): ");
    scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
          
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        }

    
        switch (choice) {
            case 1:
            result = add(num1, num2);
            printf("\n-YOU CHOOSE ADDITION-\n");
            printf("%d + %d = %.f\n", num1, num2, result);

            break;

            case 2:
            result = subtract(num1, num2);
            printf("\n-YOU CHOOSE SUBTRACTION-\n");
            printf("%d - %d = %.f\n", num1, num2, result);
            break;

            case 3:
            result = multiply(num1, num2);
            printf("\n-YOU CHOOSE MULTIPLICATION-\n");
            printf("%d * %d = %.f\n", num1, num2, result);
            break;

            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);   
                    printf("\n-YOU CHOOSE DIVISION-\n");
                    printf("%.f / %.f = %.2f\n", num1, num2, result); 
                }else {
                    printf("Error: Division by zero!\n");
                    break;
                }
                printf("Result: %.2f\n", result);
                break;

            case 5:
            printf("Exiting program...\n");
            break;

            default:
            printf("That wasn't a valid response! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
