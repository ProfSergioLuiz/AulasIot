#include <stdio.h>
#include <stdlib.h>


void calcular_imposto(float salario) {
    float imposto;
    if (salario < 500) {
        imposto = salario * 0.05;
    } else if (salario <= 850) {
        imposto = salario * 0.10;
    } else {
        imposto = salario * 0.15;
    }
    printf("Valor do imposto: R$ %.2f\n", imposto);
}

void novo_salario(float salario) {
    float aumento;
    if (salario > 1500) {
        aumento = 25.00;
    } else if (salario >= 750) {
        aumento = 50.00;
    } else if (salario >= 450) {
        aumento = 75.00;
    } else {
        aumento = 100.00;
    }
    float novo_salario = salario + aumento;
    printf("Novo salario: R$ %.2f\n", novo_salario);
}

void classificacao(float salario) {
    if (salario <= 700) {
        printf("Classificacao: Mal remunerado\n");
    } else {
        printf("Classificacao: Bem remunerado\n");
    }
}


void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}


int main() {
    int opcao;
    float salario;

    do {
        printf("Menu de Opcoes:\n");
        printf("1. Imposto\n");
        printf("2. Novo salario\n");
        printf("3. Classificacao\n");
        printf("4. Finalizar o programa\n");
        printf("Digite a opcao desejada: ");

        if (scanf("%d", &opcao) != 1) {
            limpar_buffer();
            printf("Opcao invalida! Tente novamente.\n\n");
            continue;
        }

        switch (opcao) {
            case 1:
                printf("Digite o salario do funcionario: ");
                if (scanf("%f", &salario) != 1) {
                    limpar_buffer();
                    printf("Salario invalido! Tente novamente.\n\n");
                    continue;
                }
                calcular_imposto(salario);
                break;
            case 2:
                printf("Digite o salario do funcionario: ");
                if (scanf("%f", &salario) != 1) {
                    limpar_buffer();
                    printf("Salario invalido! Tente novamente.\n\n");
                    continue;
                }
                novo_salario(salario);
                break;
            case 3:
                printf("Digite o salario do funcionario: ");
                if (scanf("%f", &salario) != 1) {
                    limpar_buffer();
                    printf("Salario invalido! Tente novamente.\n\n");
                    continue;
                }
                classificacao(salario);
                break;
            case 4:
                printf("Finalizando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

        printf("\n");

    } while (opcao != 4);

    return 0;
}

