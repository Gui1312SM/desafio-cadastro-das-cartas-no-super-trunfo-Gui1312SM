#include <stdio.h>

int main(){
    // variaveis da cidade 1
    char estado1;
    char codigoCarta1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;
    float densidade1, pibPerCapita1, superpoder1;
 
    // variaveis da cidade 2
    char estado2;
    char codigoCarta2[4];
    char cidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pTuristicos2;
    float densidade2, pibPerCapita2, superpoder2;

    int opcao1, opcao2;
    int pontosCartaUm = 0, pontosCartaDois = 0;
    float valorAtrib1Carta1, valorAtrib1Carta2;
    float valorAtrib2Carta1, valorAtrib2Carta2;
    float somaCartaUm, somaCartaDois;
    char nomeAtributo1[30], nomeAtributo2[30];

    //inserção de dados da cidade 1
    printf("===== CADASTRO DA CARTA 1 =====\n");

    printf("Insira uma letra de A a H: ");
    scanf("%c", &estado1);

    printf("Insira o codigo com um numero (Ex: 01, 02, 03): ");
    scanf("%s", codigoCarta1);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Insira a quantidade populacional: ");
    scanf("%lu", &populacao1);

    printf("Insira a area da cidade em Km²: ");
    scanf("%f", &area1);

    printf("Insira o pib (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &pTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    //inserção de dados da cidade 2
    printf("\n===== CADASTRO DA CARTA 2 =====\n");

    printf("Insira uma letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Insira o codigo com um numero (Ex: 01, 02, 03): ");
    scanf("%s", codigoCarta2);

    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Insira a quantidade populacional: ");
    scanf("%lu", &populacao2);

    printf("Insira a area da cidade em Km²: ");
    scanf("%f", &area2);

    printf("Insira o pib (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &pTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    //Exibição de dados da cidade 1
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pTuristicos1);
    printf("Densidade: %.2f hab./km²\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);
    printf("Super Poder: %.6f\n", superpoder1);

    //Exibição de dados da cidade 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pTuristicos2);
    printf("Densidade: %.2f hab./km²\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPerCapita2);
    printf("Super Poder: %.6f\n", superpoder2);

    //Menu para escolha do PRIMEIRO atributo
    printf("\n========== SUPER TRUNFO - BATALHA DE CARTAS ==========\n");
    printf("Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Digite sua opção (1-7): ");
    scanf("%d", &opcao1);

    // Validação da primeira opção
    if (opcao1 < 1 || opcao1 > 7) {
        printf("\nOpção inválida! O programa será encerrado.\n");
        return 1;
    }

    //Menu DINÂMICO para escolha do SEGUNDO atributo (excluindo o primeiro)
    printf("\nEscolha o SEGUNDO atributo para comparação:\n");
    
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Populacional (menor vence)\n");
    if (opcao1 != 6) printf("6 - PIB per capita\n");
    if (opcao1 != 7) printf("7 - Super Poder\n");
    
    printf("Digite sua opção (1-7, diferente da primeira): ");
    scanf("%d", &opcao2);

    // Validação da segunda opção
    if (opcao2 < 1 || opcao2 > 7 || opcao2 == opcao1) {
        printf("\nOpção inválida! Você não pode escolher o mesmo atributo ou uma opção fora do intervalo.\n");
        return 1;
    }

    printf("\n========== RESULTADO DA BATALHA ==========\n");

    // Processamento do PRIMEIRO atributo escolhido
    switch (opcao1) {
        case 1: // População
            valorAtrib1Carta1 = (float)populacao1;
            valorAtrib1Carta2 = (float)populacao2;
            sprintf(nomeAtributo1, "População");
            printf("\n[Atributo 1] Comparação: População\n");
            printf("Carta 1 (%s): %lu habitantes\n", cidade1, populacao1);
            printf("Carta 2 (%s): %lu habitantes\n", cidade2, populacao2);
            pontosCartaUm += (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 0 : 0;
            pontosCartaDois += (populacao2 > populacao1) ? 1 : 0;
            break;
            
        case 2: // Area
            valorAtrib1Carta1 = area1;
            valorAtrib1Carta2 = area2;
            sprintf(nomeAtributo1, "Area");
            printf("\n[Atributo 1] Comparação: Area\n");
            printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);
            pontosCartaUm += (area1 > area2) ? 1 : 0;
            pontosCartaDois += (area2 > area1) ? 1 : 0;
            break;
            
        case 3: // PIB
            valorAtrib1Carta1 = pib1;
            valorAtrib1Carta2 = pib2;
            sprintf(nomeAtributo1, "PIB");
            printf("\n[Atributo 1] Comparação: PIB\n");
            printf("Carta 1 (%s): %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhoes\n", cidade2, pib2);
            pontosCartaUm += (pib1 > pib2) ? 1 : 0;
            pontosCartaDois += (pib2 > pib1) ? 1 : 0;
            break;
            
        case 4: // Pontos Turisticos
            valorAtrib1Carta1 = (float)pTuristicos1;
            valorAtrib1Carta2 = (float)pTuristicos2;
            sprintf(nomeAtributo1, "Pontos Turisticos");
            printf("\n[Atributo 1] Comparação: Pontos Turisticos\n");
            printf("Carta 1 (%s): %d pontos\n", cidade1, pTuristicos1);
            printf("Carta 2 (%s): %d pontos\n", cidade2, pTuristicos2);
            pontosCartaUm += (pTuristicos1 > pTuristicos2) ? 1 : 0;
            pontosCartaDois += (pTuristicos2 > pTuristicos1) ? 1 : 0;
            break;
            
        case 5: // Densidade (menor vence)
            valorAtrib1Carta1 = densidade1;
            valorAtrib1Carta2 = densidade2;
            sprintf(nomeAtributo1, "Densidade");
            printf("\n[Atributo 1] Comparação: Densidade (MENOR vence)\n");
            printf("Carta 1 (%s): %.2f hab./km²\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f hab./km²\n", cidade2, densidade2);
            pontosCartaUm += (densidade1 < densidade2) ? 1 : 0;
            pontosCartaDois += (densidade2 < densidade1) ? 1 : 0;
            break;
            
        case 6: // PIB per capita
            valorAtrib1Carta1 = pibPerCapita1;
            valorAtrib1Carta2 = pibPerCapita2;
            sprintf(nomeAtributo1, "PIB per capita");
            printf("\n[Atributo 1] Comparação: PIB per capita\n");
            printf("Carta 1 (%s): %.6f\n", cidade1, pibPerCapita1);
            printf("Carta 2 (%s): %.6f\n", cidade2, pibPerCapita2);
            pontosCartaUm += (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
            pontosCartaDois += (pibPerCapita2 > pibPerCapita1) ? 1 : 0;
            break;
            
        case 7: // Super Poder
            valorAtrib1Carta1 = superpoder1;
            valorAtrib1Carta2 = superpoder2;
            sprintf(nomeAtributo1, "Super Poder");
            printf("\n[Atributo 1] Comparação: Super Poder\n");
            printf("Carta 1 (%s): %.6f\n", cidade1, superpoder1);
            printf("Carta 2 (%s): %.6f\n", cidade2, superpoder2);
            pontosCartaUm += (superpoder1 > superpoder2) ? 1 : 0;
            pontosCartaDois += (superpoder2 > superpoder1) ? 1 : 0;
            break;
            
        default:
            printf("Erro no processamento!\n");
            return 1;
    }

    // Processamento do SEGUNDO atributo escolhido
    switch (opcao2) {
        case 1: // População
            valorAtrib2Carta1 = (float)populacao1;
            valorAtrib2Carta2 = (float)populacao2;
            sprintf(nomeAtributo2, "População");
            printf("\n[Atributo 2] Comparação: População\n");
            printf("Carta 1 (%s): %lu habitantes\n", cidade1, populacao1);
            printf("Carta 2 (%s): %lu habitantes\n", cidade2, populacao2);
            pontosCartaUm += (populacao1 > populacao2) ? 1 : 0;
            pontosCartaDois += (populacao2 > populacao1) ? 1 : 0;
            break;
            
        case 2: // Area
            valorAtrib2Carta1 = area1;
            valorAtrib2Carta2 = area2;
            sprintf(nomeAtributo2, "Area");
            printf("\n[Atributo 2] Comparação: Area\n");
            printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);
            pontosCartaUm += (area1 > area2) ? 1 : 0;
            pontosCartaDois += (area2 > area1) ? 1 : 0;
            break;
            
        case 3: // PIB
            valorAtrib2Carta1 = pib1;
            valorAtrib2Carta2 = pib2;
            sprintf(nomeAtributo2, "PIB");
            printf("\n[Atributo 2] Comparação: PIB\n");
            printf("Carta 1 (%s): %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhoes\n", cidade2, pib2);
            pontosCartaUm += (pib1 > pib2) ? 1 : 0;
            pontosCartaDois += (pib2 > pib1) ? 1 : 0;
            break;
            
        case 4: // Pontos Turisticos
            valorAtrib2Carta1 = (float)pTuristicos1;
            valorAtrib2Carta2 = (float)pTuristicos2;
            sprintf(nomeAtributo2, "Pontos Turisticos");
            printf("\n[Atributo 2] Comparação: Pontos Turisticos\n");
            printf("Carta 1 (%s): %d pontos\n", cidade1, pTuristicos1);
            printf("Carta 2 (%s): %d pontos\n", cidade2, pTuristicos2);
            pontosCartaUm += (pTuristicos1 > pTuristicos2) ? 1 : 0;
            pontosCartaDois += (pTuristicos2 > pTuristicos1) ? 1 : 0;
            break;
            
        case 5: // Densidade (menor vence)
            valorAtrib2Carta1 = densidade1;
            valorAtrib2Carta2 = densidade2;
            sprintf(nomeAtributo2, "Densidade");
            printf("\n[Atributo 2] Comparação: Densidade (MENOR vence)\n");
            printf("Carta 1 (%s): %.2f hab./km²\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f hab./km²\n", cidade2, densidade2);
            pontosCartaUm += (densidade1 < densidade2) ? 1 : 0;
            pontosCartaDois += (densidade2 < densidade1) ? 1 : 0;
            break;
            
        case 6: // PIB per capita
            valorAtrib2Carta1 = pibPerCapita1;
            valorAtrib2Carta2 = pibPerCapita2;
            sprintf(nomeAtributo2, "PIB per capita");
            printf("\n[Atributo 2] Comparação: PIB per capita\n");
            printf("Carta 1 (%s): %.6f\n", cidade1, pibPerCapita1);
            printf("Carta 2 (%s): %.6f\n", cidade2, pibPerCapita2);
            pontosCartaUm += (pibPerCapita1 > pibPerCapita2) ? 1 : 0;
            pontosCartaDois += (pibPerCapita2 > pibPerCapita1) ? 1 : 0;
            break;
            
        case 7: // Super Poder
            valorAtrib2Carta1 = superpoder1;
            valorAtrib2Carta2 = superpoder2;
            sprintf(nomeAtributo2, "Super Poder");
            printf("\n[Atributo 2] Comparação: Super Poder\n");
            printf("Carta 1 (%s): %.6f\n", cidade1, superpoder1);
            printf("Carta 2 (%s): %.6f\n", cidade2, superpoder2);
            pontosCartaUm += (superpoder1 > superpoder2) ? 1 : 0;
            pontosCartaDois += (superpoder2 > superpoder1) ? 1 : 0;
            break;
            
        default:
            printf("Erro no processamento!\n");
            return 1;
    }

    // Cálculo da soma dos atributos
    somaCartaUm = valorAtrib1Carta1 + valorAtrib2Carta1;
    somaCartaDois = valorAtrib1Carta2 + valorAtrib2Carta2;

    // Exibição do resumo da batalha
    printf("\n========== RESUMO DA BATALHA ==========\n");
    printf("Atributos escolhidos: %s + %s\n", nomeAtributo1, nomeAtributo2);
    printf("\nCarta 1 - %s:\n", cidade1);
    printf("  %s: %.2f\n", nomeAtributo1, valorAtrib1Carta1);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtrib2Carta1);
    printf("  SOMA TOTAL: %.2f\n", somaCartaUm);
    
    printf("\nCarta 2 - %s:\n", cidade2);
    printf("  %s: %.2f\n", nomeAtributo1, valorAtrib1Carta2);
    printf("  %s: %.2f\n", nomeAtributo2, valorAtrib2Carta2);
    printf("  SOMA TOTAL: %.2f\n", somaCartaDois);

    // Determinação do vencedor baseado na soma
    printf("\n========== VENCEDOR ==========\n");
    if (somaCartaUm > somaCartaDois) {
        printf("🏆 CARTA 1 VENCEU! (%s com soma %.2f)\n", cidade1, somaCartaUm);
    } else if (somaCartaDois > somaCartaUm) {
        printf("🏆 CARTA 2 VENCEU! (%s com soma %.2f)\n", cidade2, somaCartaDois);
    } else {
        printf("⚖️  EMPATE! Ambas as cartas têm soma %.2f\n", somaCartaUm);
    }

    printf("\n========================================\n");
    printf("Obrigado por jogar Super Trunfo!\n");
    
    return 0;
}
