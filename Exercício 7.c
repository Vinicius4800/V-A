#include <stdio.h>

int main() {
    int n, i;
    long long int fib1 = 0, fib2 = 1, fibn; 

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo 0 da sequência de Fibonacci é: 0\n");
    }
    else if (n == 1) {
        printf("O termo 1 da sequência de Fibonacci é: 1\n");
    }
    else {
        for (i = 2; i <= n; i++) { 
            fibn = fib1 + fib2; 
            fib1 = fib2;
            fib2 = fibn;
        }
        printf("O termo %d da sequência de Fibonacci é: %lld\n", n, fibn);
    }

    return 0;
}
