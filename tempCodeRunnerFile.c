// Grading system
#include <stdio.h>

int main() {
    
    float Math, English , Kiswahili, sum, Average;
    
    printf("Enter your score for Math : ");
    scanf("%f",&Math);
    
    printf("Enter your score for English : ");
    scanf("%f",&English);
    
    printf("Enter your score for Kiswahili : ");
    scanf("%f",&Kiswahili);
    
    Average = (Math + English + Kiswahili)/3;
     if (Average >=70){
         printf("Grade A\n");
     }else if(Average >=60){
         printf("Grade B\n");
     }else if(Average >=50){
         printf("Grade C\n");
     } else if(Average >=40){
         printf("Grade D\n");
     }else{
         printf("E (fail)");
     }
    

    return 0;
}