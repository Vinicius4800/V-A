#include <stdio.h>

int main() {
    int num, soma = 0;
    float media;
    
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        soma += num;
    }
    
    media = soma / 10.0;
    
    printf("A média dos 10 números é: %.2f", media);
    
    return 0;
}
