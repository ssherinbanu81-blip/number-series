#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i * i <= n + 1; i++) {
        if (i * i == n + 1) {
            printf("Sunny Number");
            return 0;
        }
    }

    printf("Not Sunny Number");

    return 0;
}
