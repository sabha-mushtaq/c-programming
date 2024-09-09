#include<stdio.h>

int main() {
    int i, j, space, rows = 4;  // `rows` defines the height of the pyramid

    for (i = 1; i <= rows; i++) {   // Outer loop for rows
        for (space = 1; space <= rows - i; space++) {  // Print leading spaces
            printf(" ");
        }
        for (j = 1; j <= i; j++) {   // Print stars and spaces between them
            printf("*");
            if (j < i) {
                printf(" ");  // Print space between stars, except after the last star
            }
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
