// Print sum of first n natural numbers and also print them in reverse
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    printf("Numbers in reverse: ");
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
