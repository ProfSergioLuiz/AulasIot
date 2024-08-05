#include <stdio.h>

int main() {
    float notas[6][2];
    float medias[6];
    int aprovados = 0, exames = 0, reprovados = 0;
    float somaMedias = 0;

   
    for(int i = 0; i < 6; i++) {
        printf("Digite as duas notas do aluno %d:\n", i + 1);
        printf("Nota 1: ");
        scanf("%f", &notas[i][0]);
        printf("Nota 2: ");
        scanf("%f", &notas[i][1]);
    }

 
    for(int i = 0; i < 6; i++) {
        medias[i] = (notas[i][0] + notas[i][1]) / 2;
        somaMedias += medias[i];

        if(medias[i] < 3) {
            printf("Aluno %d: Media = %.2f - Reprovado\n", i + 1, medias[i]);
            reprovados++;
        } else if(medias[i] >= 3 && medias[i] < 7) {
            printf("Aluno %d: Media = %.2f - Exame\n", i + 1, medias[i]);
            exames++;
        } else {
            printf("Aluno %d: Media = %.2f - Aprovado\n", i + 1, medias[i]);
            aprovados++;
        }
    }

  
    float mediaClasse = somaMedias / 6;

    printf("\nTotal de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos em exame: %d\n", exames);
    printf("Total de alunos reprovados: %d\n", reprovados);
    printf("Media da classe: %.2f\n", mediaClasse);

    return 0;
}

