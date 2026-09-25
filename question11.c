// Will this code run? (debugging exercise)
// Original buggy version is shown commented below, corrected version runs.

/*
 Buggy version:
 #include <stdio.h>
 int main() {
     int a = 5
     printf("%d", a);
     return 0
 }
 Errors: missing semicolon after "int a = 5" and after "return 0".
*/

#include <stdio.h>

int main() {
    int a = 5;
    printf("Value of a = %d\n", a);
    return 0;
}
