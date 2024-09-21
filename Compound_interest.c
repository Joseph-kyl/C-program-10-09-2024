// compound interest
//Amount = principle _Amount * pow((1 + rate/100),total number of years)
//compound interest = Amount - principle _Amount
#include <stdio.h>
#include <math.h>

int main() 
{
 double Principle_Amount , Rate , Total_number_of_years , Amount ,Compound_interest;
     printf("Enter the Principle Amount:");
     scanf("%lf",&Principle_Amount);

     printf("Enter the Rate:");
     scanf("%lf",&Rate);
     
     printf("Enter the Total number of years:");
     scanf("%lf",&Total_number_of_years);
     
     Amount = Principle_Amount * pow((1 + Rate/100),Total_number_of_years);
     Compound_interest = Amount - Principle_Amount;
     printf(" The Compound interest is %.2lf kenya shillings",Compound_interest);

    return 0;
}