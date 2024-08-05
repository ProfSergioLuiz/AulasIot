#include <stdio.h>
#include <locale.h> /* Biblioteca para padrão PORTUGUES */
#include <stdlib.h>

int main() {
	  setlocale(LC_ALL, "Portuguese");
    int opcao;
    float salario, novo_salario, imposto;
    
    while (1) {
        printf("\nMenu de opções:\n");
        printf("1. Imposto\n");
        printf("2. Novo salário\n");
        printf("3. Classificação\n");
        printf("4. Finalizar o programa\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Digite o salário: R$");
                scanf("%f", &salario);
                imposto = salario * 0.15; 
                printf("O imposto sobre o salário é: R$%.2f\n", imposto);
                break;
            case 2:
                printf("Digite o salário: R$");
                scanf("%f", &salario);
                novo_salario = salario * 1.10; 
                printf("O novo salário é: R$%.2f\n", novo_salario);
                break;
            case 3:
                printf("Digite o salário: R$");
                scanf("%f", &salario);
                if (salario < 1000) {
                    printf("Classificação: Mal remunerado\n");
                } else if (salario >= 1000 && salario < 2000) {
                    printf("Classificação: Normal\n");
                } else {
                    printf("Classificação: Bem remunerado\n");
                }
                break;
            case 4:
                printf("Programa finalizado.\n");
                return 0; 
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    }

    return 0;
}

