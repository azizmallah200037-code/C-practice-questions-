// Store a float value in an int variable and observe the result
#include <stdio.h>

int main() {
    int a = 1.99999;   // decimal part is truncated when stored in int

    printf("Value of a = %d\n", a);
    // Output will be 1, because assigning a float/double literal to an
    // int variable truncates (cuts off) the decimal part, it does not round.

    return 0;
}
