#include <stdio.h> 
#include <locale.h> 
int main() 
{ 
} 
float salario,aumento,novo_salario; 
setlocale(LC_ALL, "Portuguese"); 
printf("digite o seu salário"); 
scanf("%f",&salario); 
printf(" o percentual de aumento é de 25% \n"); 
aumento = salario*0.25; 
novo_salario = salario + aumento; 
printf("O novo salario apos o aumento de 25%% sera: R$%2.2f\n", novo_salario); 
printf("aumento de : R$%2.2f\n", aumento );
