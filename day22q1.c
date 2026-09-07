//Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int n, temp, digit, factorial, sum = 0;

    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}