#include <stdio.h>  

int main() {  
    FILE *file;  
    char name[50];  
    int marks, n, i;  

    printf("Enter number of students: ");  
    scanf("%d", &n);  
    
    file = fopen("students.txt", "a"); // Open file in append mode  
    if (file == NULL) {  
        printf("Error opening file!\n");  
        return 1;  
    }  

    for (i = 0; i < n; i++) {  
        printf("Enter name of student %d: ", i + 1);  
        scanf("%s", name);  
        printf("Enter marks of student %d: ", i + 1);  
        scanf("%d", &marks);  
        fprintf(file, "Name: %s, Marks: %d\n", name, marks);  
    }  

    fclose(file);  
    return 0;  
}