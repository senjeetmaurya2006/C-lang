
#include <stdio.h>
#include <math.h>    // pow(), sqrt() के लिए

void add(double a, double b) {
    printf("Result (a + b) = %.6f\n", a + b);
}

void subtract(double a, double b) {
    printf("Result (a - b) = %.6f\n", a - b);
}

void multiply(double a, double b) {
    printf("Result (a * b) = %.6f\n", a * b);
}

void divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return;
    }
    printf("Result (a / b) = %.6f\n", a / b);
}

void modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero is not allowed.\n");
        return;
    }
    printf("Result (a %% b) = %d\n", a % b);
}

void power(double a, double b) {
    printf("Result (a ^ b) = %.6f\n", pow(a, b));
}

void square_root(double a) {
    if (a < 0) {
        printf("Error: Square root of negative number is not real.\n");
        return;
    }
    printf("Result (sqrt(a)) = %.6f\n", sqrt(a));
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { /* flush extra chars */ }
}

int main() {
    int choice;
    double a, b;
    
    printf("===== Menu Driven Calculator (C) =====\n");
    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition (a + b)\n");
        printf("2. Subtraction (a - b)\n");
        printf("3. Multiplication (a * b)\n");
        printf("4. Division (a / b)\n");
        printf("5. Modulus (a %% b) [integers]\n");
        printf("6. Power (a ^ b)\n");
        printf("7. Square Root sqrt(a)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        switch (choice) {
            case 1: // Addition
                printf("Enter a and b: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Invalid numbers!\n");
                    clearInputBuffer();
                    break;
                }
                add(a, b);
                break;

            case 2: // Subtraction
                printf("Enter a and b: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Invalid numbers!\n");
                    clearInputBuffer();
                    break;
                }
                subtract(a, b);
                break;

            case 3: // Multiplication
                printf("Enter a and b: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Invalid numbers!\n");
                    clearInputBuffer();
                    break;
                }
                multiply(a, b);
                break;

            case 4: // Division
                printf("Enter a and b: ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Invalid numbers!\n");
                    clearInputBuffer();
                    break;
                }
                divide(a, b);
                break;

            case 5: { // Modulus (integers)
                int ia, ib;
                printf("Enter integer a and b: ");
                if (scanf("%d %d", &ia, &ib) != 2) {
                    printf("Invalid integers!\n");
                    clearInputBuffer();
                    break;
                }
                modulus(ia, ib);
                break;
            }

            case 6: // Power
                printf("Enter a (base) and b (exponent): ");
                if (scanf("%lf %lf", &a, &b) != 2) {
                    printf("Invalid numbers!\n");
                    clearInputBuffer();
                    break;
                }
                power(a, b);
                break;

            case 7: // Square Root
                printf("Enter a: ");
                if (scanf("%lf", &a) != 1) {
                    printf("Invalid number!\n");
                    clearInputBuffer();
                    break;
                }
                square_root(a);
                break;

            case 0:
                printf("Exiting... Thank you!\n");
                break;

            default:
                printf("Invalid choice! Please select from the menu.\n");
        }

    } while (choice != 0);

    return 0;
}
