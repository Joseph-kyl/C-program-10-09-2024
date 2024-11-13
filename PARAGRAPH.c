#include <stdio.h>
#define MAX_LENGTH 200

// Function to write a paragraph to "output.txt"
void writeToFile() {
    FILE *file;
    char paragraph[MAX_LENGTH];

    // Open file in write mode
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    // Get user input
    printf("Enter a paragraph (up to 200 characters):\n");
    fgets(paragraph, MAX_LENGTH, stdin);

    // Write to file
    fprintf(file, "%s", paragraph);
    printf("Paragraph written to 'output.txt'.\n");

    // Close the file
    fclose(file);
}

int main() {
    writeToFile();
    return 0;
}