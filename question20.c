// Print odd numbers between 5 and 50
#include <stdio.h>

int main() {
    int i;

    for (i = 5; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
