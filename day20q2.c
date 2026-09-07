//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    while (reverse != 0) {
        digit = reverse % 10;
        printf("%d", digit);
        reverse = reverse / 10;
    }

    return 0;
}