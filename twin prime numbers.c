#include <stdio.h>

int prime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    if (prime(a) && prime(b) && (a - b == 2 || b - a == 2))
        printf("Twin Prime");
    else
        printf("Not Twin Prime");

    return 0;
}
