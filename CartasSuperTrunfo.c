#include <stdio.h>

int main() {

    printf("\nDesafio cadastro das cartas no Super Trunfo\n");

    //Carta número 1
    char estado1;
    char codigocarta1[3];
    char cidade1[50];
    int habitantes1;
    float area1;
    float pib1;
    int pontosturisticos1;

    printf("CARTA NUMERO 1");
    printf("\nSabendo que as letras de 'A' a 'H' representam um dos oito estados do Brasil, digite o estado da carta 1: \n");
    scanf(" %c", &estado1);
    printf("\nSabendo que a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03), digite o codigo da carta 1: \n");
    scanf("%s", codigocarta1);
    printf("\nDigite a cidade da carta 1: \n");
    scanf("%s", cidade1);
    printf("\nDigite o numero de habitantes da cidade da carta 1: \n");
    scanf("%d", &habitantes1);
    printf("\nDigite a area da cidade da carta 1, em km quadrados: \n");
    scanf("%f", &area1);
    printf("\nDigite o PIB da cidade da carta 1, em bilhoes de reais: \n");
    scanf("%f", &pib1);
    printf("\nDigite o numero de pontos turisticos da cidade da carta 1: \n");
    scanf("%d", &pontosturisticos1);

    printf("\n\nCarta 1: \n");
    printf("Estado:  %c\n", estado1);
    printf("Codigo da carta: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Numero de habitantes: %d\n", habitantes1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos1);

    //Carta número 2
    char estado2;
    char codigocarta2[3];
    char cidade2[50];
    int habitantes2;
    float area2;
    float pib2;
    int pontosturisticos2;

    printf("\n\nCARTA NUMERO 2");
    printf("\n\nSabendo que as letras de 'A' a 'H' representam um dos oito estados do Brasil, digite o estado da carta 2: \n");
    scanf(" %c", &estado2);
    printf("\nSabendo que a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03), digite o codigo da carta 2: \n");
    scanf("%s", codigocarta2);
    printf("\nDigite a cidade da carta 2: \n");
    scanf("%s", cidade2);
    printf("\nDigite o numero de habitantes da cidade da carta 2: \n");
    scanf("%d", &habitantes2);
    printf("\nDigite a area da cidade da carta 2, em km quadrados: \n");
    scanf("%f", &area2);
    printf("\nDigite o PIB da cidade da carta 2, em bilhoes de reais: \n");
    scanf("%f", &pib2);
    printf("\nDigite o numero de pontos turisticos da cidade da carta 2: \n");
    scanf("%d", &pontosturisticos2);

    printf("\n\nCarta 2: \n");
    printf("Estado:  %c\n", estado2);
    printf("Codigo da carta: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Numero de habitantes: %d\n", habitantes2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosturisticos2);

return 0;
}