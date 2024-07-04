#include <stdio.h>

// Função para soma
void Soma(int num1, int num2) {
    int result = num1 + num2;
    printf("O resultado é: %d\n", result);
}

// Função para subtração
void Sub(int numSub, int numSub2) {
    int resultSub = numSub - numSub2;
    printf("O resultado é: %d\n", resultSub);
}

// Função para multiplicação
void Mult(int numMult, int numMult2) {
    int resultMult = numMult * numMult2;
    printf("O resultado é: %d\n", resultMult);
}

int main() {
    int option;
    int num1, num2;

    while (1) {
        printf("Calculadora C, Pressione Enter\n");
        printf("Pressione 1 se deseja realizar uma soma!\n");
        printf("Pressione 2 se deseja realizar uma subtração!\n");
        printf("Pressione 3 se deseja realizar uma multiplicação!\n");
        printf("Pressione 0 se deseja sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &option);

        if (option == 0) {
            break;
        }

        printf("Digite dois números: ");
        scanf("%d %d", &num1, &num2);

        switch (option) {
            case 1:
                Soma(num1, num2);
                break;
            case 2:
                Sub(num1, num2);
                break;
            case 3:
                Mult(num1, num2);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }

    return 0;
}
