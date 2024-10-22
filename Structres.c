#include <stdio.h>
#include<string.h>

struct student{
  char email[50];
  char name[50];
  char reg_no[50];
  float marks;
  int ID;
  char phone_NO[10];
}student1,student2;
int main() {
strcpy(student1.name,"Joseph");
strcpy(student1.reg_no,"BCS-05-0124/2024");
strcpy(student1.email,"Joseph@gmail.com");
student1.ID=2479384;
strcpy(student1.phone_NO,"0732876881");
student1.marks=77.5;

printf("name:%s \n",student1.name);
printf("reg_no:%s \n",student1.reg_no);
printf("email:%s \n",student1.email);
printf("ID number:%d \n",student1.ID);
printf("phone number:%s \n",student1.phone_NO);
printf("marks:%f \n",student1.marks);     

    return 0;
}