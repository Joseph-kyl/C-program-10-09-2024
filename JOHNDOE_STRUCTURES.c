#include <stdio.h>
#include <string.h>

int main() {
char name[25];
int ID;
float Salary;
char Department[20];
char Email[50];

strcpy(name,"John Doe");
ID = 1234;
strcpy(Department,"Human resource");
Salary = 55000.50;
strcpy(Email,"john.doe@company.com");

printf("name %s \n",name);
printf("Salary %.2f \n",Salary);
printf("ID %d \n",ID);
printf("Email %s \n",Email);

    return 0;
}