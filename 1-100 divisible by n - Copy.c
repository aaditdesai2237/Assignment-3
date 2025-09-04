#include <stdio.h>

int main() {
    int n;

    // Prompt the user for input
    printf("Enter a number (n) you want to be divisible btw 1-100\n");
    scanf("%d", &n);

    // Check for division by zero

        for (int i = 1; i <= 100; i++) {
            if (i % n == 0) {
                printf("%d\n ", i);
            }
        }

        printf("\n");
    }

    // No return statement

