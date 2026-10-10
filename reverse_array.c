#include <stdio.h>

int main() {
    int a[100], n, i, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &[i]);
    }

    int start = 0, end = n - 1;

    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");
    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }

    return 0;
}