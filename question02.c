// Calculate area of sides (for integer and float values)
#include <stdio.h>

int main() {
    int side_i;
    float side_f;

    printf("--- Integer input ---\n");
    printf("Enter Side: ");
    scanf("%d", &side_i);
    
    printf("Area (int) = %d\n", side_i * side_i);

    printf("\n--- Float input ---\n");
    printf("Enter Side: ");
    scanf("%f", &side_f);
    
    printf("Area (float) = %.2f\n", side_f * side_f);

    return 0;
}
