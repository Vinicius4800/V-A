#include <stdio.h>

int main() {
    int num, maior, menor;
    
    printf("Digite um numero inteiro (negativo para sair): ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Nenhum numero valido foi digitado.\n");
        return 0;
    }
    
    maior = num;
    menor = num;
    
    while (1) {
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &num);
        
        if (num < 0) {
            printf("Maior numero digitado: %d\n", maior);
            printf("Menor numero digitado: %d\n", menor);
            break;
        }
        
        if (num > maior) {
            maior = num;
        }
        
        if (num < menor) {
            menor = num;
        }
    }
    
    return 0;
}
