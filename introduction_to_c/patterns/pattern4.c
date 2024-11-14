#include <stdio.h>
int main() {
    int rows = 5;
    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf("  "); // Two spaces to align stars
        }
        // Print stars (2*i - 1 stars in each row)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

