#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even numbers between %d and %d are:\n", start, end);
    if (start % 2 != 0) {
        start++;
    }
    int i;
    for (i = start; i <= end; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
