#include <stdio.h>

int main() {
    int T, S, B;
    scanf("%d %d %d", &T, &S, &B);
    printf("%d KB", T * S * B);
    return 0;
}
