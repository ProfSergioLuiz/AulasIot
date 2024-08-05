#include <stdio.h>

#define NUM_CIDADES 5

struct Cidade {
    int codigo;
    int veiculos_passeio;
    int acidentes_vitimas;
};


int encontrarMenor(int array[], int tamanho) {
    int menor = array[0];
    int indice_menor = 0;
    for (int i = 1; i < tamanho; i++) {
        if (array[i] < menor) {
            menor = array[i];
            indice_menor = i;
        }
    }
    return indice_menor;
}


int encontrarMaior(int array[], int tamanho) {
    int maior = array[0];
    int indice_maior = 0;
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maior) {
            maior = array[i];
            indice_maior = i;
        }
    }
    return indice_maior;
}

int main() {
    struct Cidade cidades[NUM_CIDADES];

    
    for (int i = 0; i < NUM_CIDADES; i++) {
        printf("Digite o codigo da cidade %d: ", i + 1);
        scanf("%d", &cidades[i].codigo);
        printf("Digite o numero de veiculos de passeio na cidade %d: ", i + 1);
        scanf("%d", &cidades[i].veiculos_passeio);
        printf("Digite o numero de acidentes de transito com vitimas na cidade %d: ", i + 1);
        scanf("%d", &cidades[i].acidentes_vitimas);
    }

  
    int indices_acidentes[NUM_CIDADES];
    for (int i = 0; i < NUM_CIDADES; i++) {
        indices_acidentes[i] = cidades[i].acidentes_vitimas;
    }
    int indice_menor = encontrarMenor(indices_acidentes, NUM_CIDADES);
    int indice_maior = encontrarMaior(indices_acidentes, NUM_CIDADES);

    printf("\nO menor indice de acidentes de transito e %d na cidade %d.\n", 
           cidades[indice_menor].acidentes_vitimas, cidades[indice_menor].codigo);
    printf("O maior indice de acidentes de transito e %d na cidade %d.\n", 
           cidades[indice_maior].acidentes_vitimas, cidades[indice_maior].codigo);

   
    int total_veiculos = 0;
    for (int i = 0; i < NUM_CIDADES; i++) {
        total_veiculos += cidades[i].veiculos_passeio;
    }
    float media_veiculos = (float)total_veiculos / NUM_CIDADES;
    printf("\nA media de veiculos nas cinco cidades juntas e %.2f.\n", media_veiculos);

   
    int total_acidentes_menos_2000 = 0;
    int contador_menos_2000 = 0;
    for (int i = 0; i < NUM_CIDADES; i++) {
        if (cidades[i].veiculos_passeio < 2000) {
            total_acidentes_menos_2000 += cidades[i].acidentes_vitimas;
            contador_menos_2000++;
        }
    }
    float media_acidentes_menos_2000 = 0.0;
    if (contador_menos_2000 != 0) {
        media_acidentes_menos_2000 = (float)total_acidentes_menos_2000 / contador_menos_2000;
    }
    printf("\nA media de acidentes de transito nas cidades com menos de 2.000 veiculos de passeio e %.2f.\n", 
           media_acidentes_menos_2000);

    return 0;
}

