// Keep taking numbers as input from user until user enters an odd number
#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
    } while (num % 2 == 0);

    printf("You entered an odd number: %d\n", num);

    return 0;
}
