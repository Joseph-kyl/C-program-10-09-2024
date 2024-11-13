#include <stdio.h>

// Function to read content from "output.txt" and display it
void readFromFile() {
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return;
    }

    // Read and display the content
    printf("Content of 'output.txt':\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    // Close the file
    fclose(file);
}

int main() {
    readFromFile();
    return 0;
}