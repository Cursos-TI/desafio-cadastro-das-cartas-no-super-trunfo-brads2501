// Criação do jogo, Super Trunfo. Permitindo ao usuário preencher 2 cartas.

// Importando bibliotecas.

#include <stdio.h>

// Declarando as variáveis.

int main(){
    char estado[50], codigoCarta[15], cidade[50];
    int populacao, pontosTuristicos;
    float area, pib;

    // Solicitando dados ao usuário, para a carta 01.

    printf("CARTA 01: \n");

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código da Carta Ex.: A01: \n");
    scanf("%s", &codigoCarta);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Área Km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("\n");

    // Solicitando dados ao usuário, para a carta 02.

    printf("CARTA 02: \n");

    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código da Carta Ex.: A01: \n");
    scanf("%s", &codigoCarta);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Área Km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("\n");

    // Exibindo os dados das cartas.
    
    printf("CARTA 01 \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigoCarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Área Km²: %f \n", area);
    printf("PIB: %f \n", pib);

    printf("\n");

    printf("CARTA 02 \n");
    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigoCarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos);
    printf("Área Km²: %f \n", area);
    printf("PIB: %f \n", pib);

    printf("\n");

    return 0;
    

}