// Keep taking numbers as input from user until user enters a multiple of 7
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num % 7 != 0);

    printf("You entered a multiple of 7: %d\n", num);

    return 0;
}
