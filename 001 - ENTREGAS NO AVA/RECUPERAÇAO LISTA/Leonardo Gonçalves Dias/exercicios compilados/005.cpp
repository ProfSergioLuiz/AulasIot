#include <stdio.h>

int main() {
    float divida;
    
   
    printf("Digite o valor da divida: ");
    scanf("%f", &divida);
    
   
    int parcelas[] = {1, 3, 6, 9, 12};
    float juros[] = {0.0, 0.10, 0.15, 0.20, 0.25};
    
  
    printf("%-20s %-20s %-25s %-20s\n", "Valor da Divida", "Valor dos Juros", "Quantidade de Parcelas", "Valor da Parcela");
    printf("----------------------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < 5; i++) {
        float valor_juros = divida * juros[i];
        float valor_divida_com_juros = divida + valor_juros;
        float valor_parcela = valor_divida_com_juros / parcelas[i];
        
        printf("%-20.2f %-20.2f %-25d %-20.2f\n", valor_divida_com_juros, valor_juros, parcelas[i], valor_parcela);
    }
    
    return 0;
}

