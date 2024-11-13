#include <stdio.h>
#define MAX_LENGTH 200

// Function to append a paragraph to "output.txt"
void appendToFile() {
    FILE *file;
    char paragraph[MAX_LENGTH];

    // Open file in append mode
    file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }

    // Get user input
    printf("Enter an additional paragraph (up to 200 characters):\n");
    fgets(paragraph, MAX_LENGTH, stdin);

    // Append to file
    fprintf(file, "%s", paragraph);
    printf("Paragraph appended to 'output.txt'.\n");

    // Close the file
    fclose(file);
}

int main() {
    appendToFile();
    return 0;
}