// calculating simple interest
#include <stdio.h>

int main() {
    float Principle_Amount, time, rate,simple_interest;
     printf("Enter the Principle Amount:");
     scanf("%f",&Principle_Amount);

     printf("Enter the time:");
     scanf("%f",&time);
     
     printf("Enter the rate:");
     scanf("%f",&rate);
     
     simple_interest = (Principle_Amount * time * rate )/100 ;
     printf("simple_interest %f Kenya shillings",simple_interest);
     
     return 0;
}