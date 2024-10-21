#include <stdio.h>
#include <math.h>

float calculateArea(float radius) {
    
    return M_PI * pow(radius, 2);
}

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = calculateArea(radius);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}