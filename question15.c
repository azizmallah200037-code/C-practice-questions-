// Print numbers from 0 to n, where n is given by user
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
