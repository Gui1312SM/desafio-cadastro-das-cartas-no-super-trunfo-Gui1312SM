#include <stdio.h>

int main(){
    // variaveis da cidade 1 abaixo
    char estado1;
    char codigoCarta1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;
    float densidade1, pibPerCapita1, superpoder1;
 
    // variaveis da cidade 2 abaixo
    char estado2;
    char codigoCarta2[4];
    char cidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pTuristicos2;
    float densidade2, pibPerCapita2, superpoder2;

    //inserção de dados da cidade 1 abaixo
    printf("Insira as inforamcoes da carta 1\n");

    printf("Insira uma letra de A a H:");
    scanf("%c", &estado1);

    printf("Insira o codigo com um numero (Ex:01, 02, 03):");
    scanf("%s", &codigoCarta1);

    printf("Insira o nome da cidade:");
    scanf(" %[^\n]", &cidade1); // Fui atrás de como usar strings com espaços e acabei encontrando essa solução

    printf("Insira a quantidade populacional:");
    scanf("%lu", &populacao1);

    printf("Insira a area da cidade em Km²:");
    scanf("%f", &area1);

    printf("Insira o pib:");
    scanf("%f", &pib1);

    printf("Indira a quantidade de pontos turisticos da cidade:");
    scanf("%d", &pTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    //inserção de dados da cidade 2 abaixo
    printf("Insira as inforamcoes da carta 2\n");

    printf("Insira uma letra de A a H:");
    scanf(" %c", &estado2);

    printf("Insira o codigo com um numero (Ex:01, 02, 03):");
    scanf("%s", &codigoCarta2);

    printf("Insira o nome da cidade:");
    scanf(" %[^\n]", &cidade2); // Fui atrás de como usar strings com espaços e acabei encontrando essa solução

    printf("Insira a quantidade populacional:");
    scanf("%lu", &populacao2);

    printf("Insira a area da cidade em Km²:");
    scanf("%f", &area2);

    printf("Insira o pib:");
    scanf("%f", &pib2);

    printf("Indira a quantidade de pontos turisticos da cidade:");
    scanf("%d", &pTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    //Exibição de dados da cidade 1
    printf("\n Carta01 \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo de carta: %c %s\n", estado1, codigoCarta1);
    printf("Cidade de: %s\n", cidade1);
    printf("A população é de: %lu de habitantes\n", populacao1);
    printf("Area de: %.2f km²\n", area1);
    printf("O PIB é: %.2f bilhoes de reais\n", pib1);
    printf("Quantidade de pontos turisticos: %d\n", pTuristicos1);
    printf("A densisade populacional é: %.2f hab./km²\n", densidade1);
    printf("O Pib per capita é: %.6f reais \n", pibPerCapita1);
    printf("Super Poder: %.6f\n", superpoder1);

    //Exibição de dados da cidade 2
    printf("\n Carta02 \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo de carta: %c %s\n", estado2, codigoCarta2);
    printf("Cidade de: %s\n", cidade2);
    printf("A população é de: %lu de habitantes\n", populacao2);
    printf("Area de: %.2f km²\n", area2);
    printf("O PIB é: %.2f bilhoes de reais\n", pib2);
    printf("Quantidade de pontos turisticos: %d\n", pTuristicos2);
    printf("A densisade populacional é: %.2f hab./km²\n", densidade2);
    printf("O Pib per capita é: %.6f reais\n", pibPerCapita2);
    printf("Super Poder: %.6f\n", superpoder2);

    // Fazendo as condições
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu habitantes\n", cidade2, estado2, populacao2);

    
    //Fazendo as comparações
    int winPop = (populacao1 > populacao2);
    int winArea = (area1 > area2);
    int winPib = (pib1 > pib2);
    int winPonturistico = (pTuristicos1 > pTuristicos2);
    int winDensidade = (densidade1 < densidade2);
    int winPpc = (pibPerCapita1 > pibPerCapita2);
    int winSuperP = (superpoder1 > superpoder2);

    //Resultado das comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", winPop);
    printf("Area: Carta 1 venceu (%d)\n", winArea);
    printf("PIB: Carta 1 venceu (%d)\n", winPib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", winPonturistico);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", winDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", winPpc);
    printf("Super Poder: Carta 1 venceu (%d)\n", winSuperP);
    
    return 0;
}
