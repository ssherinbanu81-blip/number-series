#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, digits = 0;
    int arr[20], i = 0, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0) {
        arr[i++] = temp % 10;
        temp /= 10;
    }

    for (i = digits - 1; i >= 0; i--)
        sum += pow(arr[i], digits - i);

    if (sum == n)
        printf("Disarium Number");
    else
        printf("Not Disarium Number");

    return 0;
}
