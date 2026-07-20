#include <stdio.h>

int main() {
    int n, rem, sum = 0;

    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;

        if (rem % 2 != 0)
            sum += rem;

        n /= 10;
    }

    printf("%d", sum);

    return 0;
}
