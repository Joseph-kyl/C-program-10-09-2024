//c variables and data types
//Preprocessor directive
#include <stdio.h> // scanf(), printf()
int main(){
    //declaration and initialization
    char a = 'k' ; //%c
    char name[] = "Joseph"; //%s
    int age = 23; //0-9, %d
    float area = 2.035; //%f
    double salary = 2000000.50; //%lf
    printf("The character is %c \n",a);
    printf("The string is %s \n",name);
    printf("His age is %d years\n", age);
    printf("The area is %.3f metre squared\n", area);
    printf("His salary is %.2lf Kenyan shillings\n", salary);
    
    return 0;
    
}