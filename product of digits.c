#include <stdio.h>

int main() {
    int n, product = 1, rem;

    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        product *= rem;
        n /= 10;
    }

    printf("%d", product);

    return 0;
}
