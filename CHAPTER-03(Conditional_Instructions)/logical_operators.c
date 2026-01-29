#include <stdio.h>

int main() {
    int a = 5;
    int b = 1;
    if (a == 5 && b == 10) {
        printf("Both conditions are true %d\n", a&&b);
    }
    if (a == 5 || b == 5) {
        printf("At least one condition is true %d\n", a||b);
    }
    return 0;   
}