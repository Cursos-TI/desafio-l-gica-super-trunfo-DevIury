#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int codigo, pontos, codigo2, pontos2;
    char cidade[50], cidade2[50];
    float povo, area, povo2, area2;
    double PIB, PIB2;

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite a população: \n");
    scanf("%f", &povo);

    printf("Cite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &pontos);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo2);

    printf("Digite a população: \n");
    scanf("%f", &povo2);

    printf("Cite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &pontos2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2);
    

    if(povo > povo2){
        printf("Cidade 1 tem maior população que cidade 2!");
    }else{
        printf("Cidade 2 tem maior população que a cidade 1!");
    }

    if(pontos > pontos2){
        
    }
    
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
