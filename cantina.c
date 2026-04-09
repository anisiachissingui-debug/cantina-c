#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;

    do {
        printf("\n=== CANTINA ===\n");
        printf("1. Pao - 50.00 Kz\n");
        printf("2. Cafe - 100.00 Kz\n");
        printf("3. Sumos - 150.00 Kz\n");
        printf("4. Sanduiche - 300.00 Kz\n");
        printf("0. Finalizar compra\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Quantidade: ");
            scanf("%d", &quantidade);
        }

        switch(opcao) {
            case 1:
                total += quantidade * 50;
                printf("Adicionado ao carrinho!\n");
                break;

            case 2:
                total += quantidade * 100;
                printf("Adicionado ao carrinho!\n");
                break;

            case 3:
                total += quantidade * 150;
                printf("Adicionado ao carrinho!\n");
                break;

            case 4:
                total += quantidade * 300;
                printf("Adicionado ao carrinho!\n");
                break;

            case 0:
                printf("\nTotal a pagar: %.2f Kz\n", total);
                printf("Obrigado pela preferencia!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while(opcao != 0);

    return 0;
}
