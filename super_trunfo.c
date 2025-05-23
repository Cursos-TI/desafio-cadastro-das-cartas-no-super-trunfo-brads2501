// Criação do jogo, Super Trunfo. Permitindo ao usuário preencher 2 cartas.

// Importando bibliotecas.

#include <stdio.h>

// Declarando as variáveis.

int main(){
    char estado1[50], codigoCarta1[15], cidade1[50];
    unsigned long int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibperCapita1, superPoder1;

    char estado2[50], codigoCarta2[15], cidade2[50];
    unsigned long int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibperCapita2, superPoder2;
    int escolha;

    // Solicitando dados ao usuário, para a carta 01.

    printf("CARTA 01: \n");

    printf("Estado: \n");
    scanf("%s", &estado1);

    printf("Código da Carta Ex.: A01: \n");
    scanf("%s", &codigoCarta1);

    printf("Cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("Área Km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    densidadePopulacional1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1 + (1.0 / densidadePopulacional1);
    
    printf("\n");

    // Solicitando dados ao usuário, para a carta 02.

    printf("CARTA 02: \n");

    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Código da Carta Ex.: A02: \n");
    scanf("%s", &codigoCarta2);

    printf("Cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Área Km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    densidadePopulacional2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2 + (1.0 / densidadePopulacional2);

    printf("\n");

    printf("1 - PONTOS TURÍSTICOS \n ");
    printf("2 - PIB per CAPITA \n");
    printf("DIGITE O NÚMERO DA SUA ESCOLHA: ");
    scanf("%d", &escolha);

    printf("\n");
    
    // Exibindo os dados das cartas.
    
    printf("CARTA 01 \n");
    printf("Estado: %s \n", estado1);
    printf("Código da carta: %s \n", codigoCarta1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Área Km²: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Densidade Populacional: %f \n", densidadePopulacional1);
    printf("PIB PerCapita: %f \n", pibperCapita1);
    printf("Super Poder: %f \n", superPoder1);
    
    printf("\n");

    printf("CARTA 02 \n");
    printf("Estado: %s \n", estado2);
    printf("Código da carta: %s \n", codigoCarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Área Km²: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Densidade Populacional: %f \n", densidadePopulacional2);
    printf("PIB PerCapita: %f \n", pibperCapita2);
    printf("Super Poder: %f \n", superPoder2);

    printf("\n");

    // Exibindo a comparação das cartas, qual carta vence.

    printf("COMPARAÇÃO DAS CARTAS: \n");

    printf("CARTA 1 - %s (%s): %1d\n", cidade1, estado1, populacao1);
    printf("CARTA 2 - %s (%s): %1d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("RESULTADO: CARTA 1 (%s (%s)) VENCE! \n", cidade1, estado1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("RESULTADO: CARTA 2 (%s (%s)) VENCEU! \n", cidade2, estado2);
    } else {
        printf("RESULTADO: AS CARTAS TÊM A MESMA POPULAÇÃO! \n");
    }

    printf("\n");  
    
    return 0;


}
