#include <stdio.h>

int main() {
    int base, power, i;
    long long result = 1;

    scanf("%d%d", &base, &power);

    for (i = 1; i <= power; i++)
        result *= base;

    printf("%lld", result);

    return 0;
}
