#include <stdio.h>

// Desafio Super Trunfo - Países - João Vitor Delgado de Souza
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variáveis para a primeira carta
    char estado1[3], cidade1[50];
    int codigo1, pontos1;
    float populacao1, area1, pib1;

    // Variáveis para a segunda carta
    char estado2[3], cidade2[50];
    int codigo2, pontos2;
    float populacao2, area2, pib2;

    // ==== Cadastro da primeira carta ====
    printf("Cadastro da primeira carta:\n");
    printf("Estado (UF, 2 letras): ");
    scanf("%2s", estado1);                 
    printf("Codigo da carta: ");
    scanf("%d", &codigo1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);           
    printf("Populacao: ");
    scanf("%f", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // ==== Cadastro da segunda carta ====
    printf("\nCadastro da segunda carta:\n");
    printf("Estado (UF, 2 letras): ");
    scanf("%2s", estado2);                 
    printf("Codigo da carta: ");
    scanf("%d", &codigo2);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);           
    printf("Populacao: ");
    scanf("%f", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==== Exibição das cartas ====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\nCodigo: %d\nCidade: %s\nPopulacao: %.0f\nArea: %.2f km2\nPIB: %.2f bi\nPontos Turisticos: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\nCodigo: %d\nCidade: %s\nPopulacao: %.0f\nArea: %.2f km2\nPIB: %.2f bi\nPontos Turisticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

    // ==== Comparação ====
    // 1 = População | 2 = Área | 3 = PIB | 4 = Pontos Turísticos | 5 = Densidade Populacional
    int criterio = 5; // altere aqui para testar outro critério

    printf("\n=== Resultado da Comparacao ===\n=== Critério de Densidade ===\n");

    if (criterio == 1) { // População - maior vence
        if (populacao1 > populacao2)
            printf("Vencedor: Carta 1 (%s)\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Vencedor: Carta 2 (%s)\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (criterio == 2) { // Área - maior vence
        if (area1 > area2)
            printf("Vencedor: Carta 1 (%s)\n", cidade1);
        else if (area2 > area1)
            printf("Vencedor: Carta 2 (%s)\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (criterio == 3) { // PIB - maior vence
        if (pib1 > pib2)
            printf("Vencedor: Carta 1 (%s)\n", cidade1);
        else if (pib2 > pib1)
            printf("Vencedor: Carta 2 (%s)\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (criterio == 4) { // Pontos turísticos - maior vence
        if (pontos1 > pontos2)
            printf("Vencedor: Carta 1 (%s)\n", cidade1);
        else if (pontos2 > pontos1)
            printf("Vencedor: Carta 2 (%s)\n", cidade2);
        else
            printf("Empate!\n");
    }
    else if (criterio == 5) { // Densidade populacional - menor vence
        float densidade1 = populacao1 / area1;
        float densidade2 = populacao2 / area2;
        if (densidade1 < densidade2)
            printf("Vencedor: Carta 1 (%s)\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Vencedor: Carta 2 (%s)\n", cidade2);
        else
            printf("Empate!\n");
    }
    else {
        printf("Criterio de comparacao invalido!\n");
    }

    return 0;
}
