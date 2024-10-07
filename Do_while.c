#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    do {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
        i++;
    } while (i <= n);

    return 0;
}