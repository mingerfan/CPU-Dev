#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
        printf("Current sum from 1 to %d: %d\n", i, sum);
    }
    printf("Final sum: %d\n", sum);
    return 0;
}
