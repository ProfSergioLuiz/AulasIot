#include <stdio.h>

int main() {
    int anoContratacao = 2005;
    double salarioInicial = 1000.00;
    double salarioAtual = salarioInicial;
    double aumentoPercentual = 1.5;

    for (int ano = 2006; ano <= 2024; ano++) {
        salarioAtual += salarioAtual * (aumentoPercentual / 100.0);
        aumentoPercentual *= 2; 
    }

    printf("O salario atual em 2024 vai ser: R$ %.2f\n", salarioAtual);
    return 0;
}

