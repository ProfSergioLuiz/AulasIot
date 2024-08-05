#include <stdio.h>
#include <locale.h> /* Biblioteca para padr�o PORTUGUES */
#include <stdlib.h>

int main() {
	  setlocale(LC_ALL, "Portuguese");
    int opcao;
    float salario, novo_salario, imposto;
    
    while (1) {
        printf("\nMenu de op��es:\n");
        printf("1. Imposto\n");
        printf("2. Novo sal�rio\n");
        printf("3. Classifica��o\n");
        printf("4. Finalizar o programa\n");
        printf("Digite a op��o desejada: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite o sal�rio: R$");
                scanf("%f", &salario);
                imposto = salario * 0.15; 
                printf("O imposto sobre o sal�rio �: R$%.2f\n", imposto);
                break;
            case 2:
                printf("Digite o sal�rio: R$");
                scanf("%f", &salario);
                novo_salario = salario * 1.10; 
                printf("O novo sal�rio �: R$%.2f\n", novo_salario);
                break;
            case 3:
                printf("Digite o sal�rio: R$");
                scanf("%f", &salario);
                if (salario < 1000) {
                    printf("Classifica��o: Mal remunerado\n");
                } else if (salario >= 1000 && salario < 2000) {
                    printf("Classifica��o: Normal\n");
                } else {
                    printf("Classifica��o: Bem remunerado\n");
                }
                break;
            case 4:
                printf("Programa finalizado.\n");
                return 0; 
            default:
                printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
        }
    }

    return 0;
}

