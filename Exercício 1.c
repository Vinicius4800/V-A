
#include <stdio.h>

int main() {
    int A, B, C, D, diferenca;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    diferenca = (A * B - C * D);
    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = (%d)", diferenca);
    return 0;
}