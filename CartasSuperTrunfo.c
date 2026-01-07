#include <stdio.h>
#include <locale.h> // 1. Inclua esta biblioteca

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // 2. Configure a localização para português do Brasil
    // Variáveis para a Carta 1
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1; // Usando unsigned para populações grandes
    float area1, pib1, densidade1, pibPerCapita1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2;
    int pontosTuristicos2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // Ajustado para Reais

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n=================================");
    printf("\nCARTA 1:");
    printf("\nEstado: %c | Código: %s", estado1, codigo1);
    printf("\nCidade: %s", nomeCidade1);
    printf("\nPopulação: %lu", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: %.2f bilhões", pib1);
    printf("\nPontos Turísticos: %d", pontosTuristicos1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: R$ %.2f", pibPerCapita1);
    
    printf("\n---------------------------------");

    printf("\nCARTA 2:");
    printf("\nEstado: %c | Código: %s", estado2, codigo2);
    printf("\nCidade: %s", nomeCidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: %.2f bilhões", pib2);
    printf("\nPontos Turísticos: %d", pontosTuristicos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: R$ %.2f", pibPerCapita2);
    printf("\n=================================\n");

    return 0;
}