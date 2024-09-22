//surface area of cylinder
#include <stdio.h>

int main() 
{
 double PI , radius , height, surface_of_the_cylinder;
     PI = 3.142;
     
     printf("Enter the radius :");
     scanf("%lf",&radius);

     printf("Enter the height :");
     scanf("%lf",&height);
     
     surface_of_the_cylinder = (2 * PI * radius * height) + (2 * PI * radius * radius);
     printf(" The surface area of the cylinder is %.2lf centimetre squared",surface_of_the_cylinder);

    return 0;
}