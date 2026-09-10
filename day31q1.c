//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, i, a[100], search;
    int found = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            found = i;
            break;
        }
    }

    if (found != -1)
        printf("Found at index %d", found);
    else
        printf("-1");

    return 0;
}