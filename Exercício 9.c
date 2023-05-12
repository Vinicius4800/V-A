#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1 => ABACAXI - 5,00 a unidade\n");
        printf("2 => MACA - 1,00 a unidade\n");
        printf("3 => PERA - 4,00 a unidade\n");
        printf("0 => Sair\n");

        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                break;
            case 1:
                printf("Digite a quantidade de abacaxis:\n");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de macas:\n");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras:\n");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            default:
                printf("Opcao invalida.\n");
                break;
        }

    } while(opcao != 0);

    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}
