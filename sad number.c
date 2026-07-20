#include <stdio.h>

int main() {
    int n, rem, sum;

    scanf("%d", &n);

    while (n != 1 && n != 4) {
        sum = 0;

        while (n != 0) {
            rem = n % 10;
            sum += rem * rem;
            n /= 10;
        }

        n = sum;
    }

    if (n == 4)
        printf("Sad Number");
    else
        printf("Not Sad Number");

    return 0;
}
