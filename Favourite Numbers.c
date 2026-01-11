#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);

    // Alice likes even numbers that are multiples of 7
    if (A % 2 == 0 && A % 7 == 0) {
        printf("Alice");
    }
    // Bob likes odd numbers that are multiples of 9
    else if (A % 2 == 1 && A % 9 == 0) {
        printf("Bob");
    }
    // Otherwise Charlie takes it
    else {
        printf("Charlie");
    }

    return 0;
}
