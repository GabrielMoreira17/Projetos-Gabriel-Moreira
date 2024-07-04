#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6
#define TAMANHO_PALAVRA 100

void exibirEstado(char palavraSecreta[], char palavraAdivinhada[], int tentativasRestantes) {
    printf("Palavra: %s\n", palavraAdivinhada);
    printf("Tentativas restantes: %d\n", tentativasRestantes);
}

int main() {
    char palavraSecreta[TAMANHO_PALAVRA] = "PROGRAMACAO";
    int tentativasRestantes = MAX_TENTATIVAS;
    int tamanhoPalavra = strlen(palavraSecreta);
    char palavraAdivinhada[TAMANHO_PALAVRA];
    char letra;
    int i, acerto;

    
    for (i = 0; i < tamanhoPalavra; i++) {
        palavraAdivinhada[i] = '_';
    }
    palavraAdivinhada[tamanhoPalavra] = '\0';

    printf("Bem-vindo ao jogo da forca!\n");

    while (tentativasRestantes > 0) {
        exibirEstado(palavraSecreta, palavraAdivinhada, tentativasRestantes);

        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = toupper(letra);

        acerto = 0;
        for (i = 0; i < tamanhoPalavra; i++) {
            if (palavraSecreta[i] == letra) {
                palavraAdivinhada[i] = letra;
                acerto = 1;
            }
        }

        if (!acerto) {
            tentativasRestantes--;
            printf("Letra incorreta!\n");
        }

        if (strcmp(palavraSecreta, palavraAdivinhada) == 0) {
            printf("Parabéns! Você adivinhou a palavra: %s\n", palavraSecreta);
            break;
        }
    }

    if (tentativasRestantes == 0) {
        printf("Você perdeu! A palavra era: %s\n", palavraSecreta);
    }

    return 0;
}
