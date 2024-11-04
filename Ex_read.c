#include <stdio.h>  

int main() {  
    FILE *file;  
    char name[50];  
    int marks[5], i;  

    file = fopen("students.txt", "w");  
    if (file == NULL) {  
        printf("Error opening file!\n");  
        return 1;  
    }  

    for (i = 0; i < 5; i++) {  
        printf("Enter name of student %d: ", i + 1);  
        scanf("%s", name);  
        printf("Enter marks of student %d: ", i + 1);  
        scanf("%d", &marks[i]);  
        fprintf(file, "Name: %s, Marks: %d\n", name, marks[i]);  
    }  

    fclose(file);  
    return 0;  
}