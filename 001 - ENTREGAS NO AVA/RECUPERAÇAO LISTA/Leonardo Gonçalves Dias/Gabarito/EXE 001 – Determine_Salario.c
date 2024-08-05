#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL,"Portuguese");
	int i, ano_atual;
	float salario, novo_salario, percentual;
	printf("Digite o ano atual: ");
	scanf("%d%*c",&ano_atual);
	salario = 1000;
	percentual = 1.5/100;
	novo_salario = salario + salario * percentual;
	for (i=2006;i<=ano_atual;i++)
		 {
			 percentual = 2 * percentual;
			 novo_salario = novo_salario + (percentual * novo_salario);
		 }
	 printf("Novo salário = %10.2f",novo_salario);
	 getchar();
	 return 0;
}
