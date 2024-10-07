#include <stdio.h>

int main() {
    int n, i = 1;

    // Prompt the user to input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // While loop to iterate through the numbers and display cubes
    while (i <= n) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
        i++;
    }

    return 0;
}