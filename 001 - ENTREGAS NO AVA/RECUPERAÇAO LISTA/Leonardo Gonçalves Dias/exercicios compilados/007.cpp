#include <stdio.h>
#include <stdbool.h>


bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}


int main() {
    int vetor[9];

 
    printf("Digite 9 numeros inteiros:\n");
    for (int i = 0; i < 9; i++) {
        while (1) {
            printf("Numero %d: ", i + 1);
            if (scanf("%d", &vetor[i]) != 1) {
                limpar_buffer();
                printf("Entrada invalida! Por favor, digite um numero inteiro.\n");
            } else {
                limpar_buffer(); 
                break;
            }
        }
    }

   
    printf("\nNumeros primos e suas respectivas posicoes:\n");
    for (int i = 0; i < 9; i++) {
        if (eh_primo(vetor[i])) {
            printf("Numero %d na posicao %d\n", vetor[i], i);
        }
    }

    return 0;
}



