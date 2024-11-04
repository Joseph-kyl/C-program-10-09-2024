#include <stdio.h>  
#include <string.h>  

#define MAX_LENGTH 100  

// Function to write a sentence to a file  
void writeToFile() {  
    FILE *file;  
    char sentence[MAX_LENGTH];  

    printf("Enter a sentence (up to 100 characters): ");  
    fgets(sentence, MAX_LENGTH, stdin);  
    
    // Open file in write mode  
    file = fopen("data.txt", "w");  
    if (file == NULL) {  
        perror("Error opening file");  
        return;  
    }  

    fprintf(file, "%s", sentence);  
    fclose(file);  
}  

// Function to read content from the file and display it  
void readFromFile() {  
    FILE *file;  
    char buffer[MAX_LENGTH];  

    // Open file in read mode  
    file = fopen("data.txt", "r");  
    if (file == NULL) {  
        perror("Error opening file");  
        return;  
    }  

    printf("Content of data.txt:\n");  
    while (fgets(buffer, sizeof(buffer), file) != NULL) {  
        printf("%s", buffer);  
    }  
    fclose(file);  
}  

// Function to append a second sentence to the file  
void appendToFile() {  
    FILE *file;  
    char sentence[MAX_LENGTH];  

    printf("Enter a second sentence to append: ");  
    fgets(sentence, MAX_LENGTH, stdin);  
    
    // Open file in append mode  
    file = fopen("data.txt", "a");  
    if (file == NULL) {  
        perror("Error opening file");  
        return;  
    }  

    fprintf(file, "%s", sentence);  
    fclose(file);  
}  

int main() {  
    writeToFile();  
    readFromFile();  
    appendToFile();  
    readFromFile(); // Read again to show the new content  
    return 0;  
}