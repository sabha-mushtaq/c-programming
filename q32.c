#include <stdio.h>

int main() {
    int rows[] = {5, 3, 2, 1};  // Define the number of stars for each row

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < rows[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}