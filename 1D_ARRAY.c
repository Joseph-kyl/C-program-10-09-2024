#include <stdio.h>

int main() {
 
    int array[4] = {10, 20, 30, 40};
    
    for(int i = 0; i < 4; i++) {
        
        printf("Element at array[%d]: %d\n", i, array[i]);
    }
    
    return 0;
}