#include <stdio.h>

int main() {
    int length , width , Area;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the width:");
    scanf("%d",&width);
    Area = length* width;
    printf("The Area is %d",Area);

    return 0;
}