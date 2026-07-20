#include <stdio.h>

int main() {
    int n, rem, max = 0;

    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;

        if (rem > max)
            max = rem;

        n /= 10;
    }

    printf("%d", max);

    return 0;
}
