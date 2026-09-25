// Check if a number is positive or negative.
// If positive, check whether it is even or odd (nested if)
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("%d is Positive\n", num);

        if (num % 2 == 0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    } else {
        printf("%d is Negative\n", num);
    }

    return 0;
}
