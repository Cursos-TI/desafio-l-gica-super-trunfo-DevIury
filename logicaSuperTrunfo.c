#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int codigo, pontos, pontos2;
    char cidade[50], cidade2[50];
    float povo, area, povo2, area2;
    double PIB, PIB2;
    int soma1, soma2,soma3;

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
    scanf("%d", &codigo);

    printf("Digite a população: \n");
    scanf("%f", &povo2);

    printf("Cite quantos pontos turísticos a cidade possui: \n");
    scanf("%d", &pontos2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2);
    

    if(povo > povo2){
        printf("Cidade 1 tem maior população que cidade 2!\n");
        soma1 +=1;
    }
    if(povo == povo2){
        printf("As cidades têm a mesma população!\n");
        soma3+=1;
    }
    else{
        printf("Cidade 2 tem maior população que a cidade 1!\n");
        soma2+=1;
    }

    if(pontos > pontos2){
        printf("A cidade 1 tem mais pontos turísticos que a cidade 2!\n");
        soma1+=1;
    }
    if(pontos == pontos2){
        printf("As cidades têm a mesma quantidade de pontos turísticos!\n");
        soma3 +=1;
    }else{
        printf("A cidade 2 tem mais pontos turísticos!\n");
        soma2+=1;
    }

    if(area > area2){
        printf("A cidade 1 tem uma área maior que a cidade 2!\n");
        soma1+=1;
    }if(area == area2){
        printf("As cidades têm a mesma área!\n");
        soma3 +=1;
    }else{
        printf("A cidade 2 tem uma área maior que a cidade 1!\n");
        soma2+=1;
    }

    if(PIB > PIB2){
        printf("A cidade 1 tem o PIB maior do que a cidade 2!\n");
        soma1+=1;
    }if(PIB == PIB2){
        printf("O PIB das cidades são iguais!\n");
        soma3+=1;
    }else{
        printf("O PIB da cidade 2 é maior do que a da cidade 1!\n");
        soma2+=1;
    }
    
    if(soma1 > soma2){
        printf("A cidade 1 é considerada vencedora, pois possui maiores qualificações nos atributos!\n");
    }if(soma3 > soma1, soma2){
        printf("As cidades têm a mesma quantidade de qualificações!\n");
        soma3 +=1;
    }else{
        printf("A cidade 2 é considerada vencedora, pois possui maiores qualificações nos atributos!\n");
    }

    return 0;
}
