#include <stdio.h>

int main() {
    int n, rem, flag = 0;

    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        if (rem == 0)
            flag = 1;
        n /= 10;
    }

    if (flag)
        printf("Duck Number");
    else
        printf("Not Duck Number");

    return 0;
}
