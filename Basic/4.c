#include "stdio.h"

void main() {
    int sum = 0;
    int i = 1;
    while (i <= 10) {
        sum += i++;
    }

    printf("%d", sum);
}