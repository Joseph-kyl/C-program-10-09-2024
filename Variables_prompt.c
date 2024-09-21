//c variables and data types
//Preprocessor directive
#include <stdio.h> // scanf(), printf()
int main(){
    //declaration and initialization
    char a ;
    char name[5] ; 
    int age ;
    float area ;
    double salary ;
    
    printf("Enter the character:");
    scanf("%c",&a);
    printf("The character is %c \n",a);
    
    printf("Enter your name:");
    scanf("%s",&name);
    printf("The string is %s \n",name);
    
    printf("Enter your age:");
    scanf("%d",&age);
    printf("His age is %d years\n", age);
    
    printf("Enter the area:");
    scanf("%f",&area);
    printf("The area is %.3f metre squared\n", area);
    
    printf("Enter your salary:");
    scanf("%lf",&salary);
    printf("His salary is %.2lf Kenyan shillings\n", salary);
    
    /*
    
    printf("The string is %s \n",name);
    printf("His age is %d years\n", age);
    printf("The area is %.3f metre squared\n", area);
    printf("His salary is %.2lf Kenyan shillings\n", salary);
    */
    
    return 0;
    
}