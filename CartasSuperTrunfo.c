#include <stdio.h>
#include <locale.h>

int main() {
    // Configuração para aceitar acentos sem quebrar os decimais
    setlocale(LC_CTYPE, "Portuguese");

    // Variáveis da Carta 1
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1; // Tipo solicitado para números grandes
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontos1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontos2;

    // --- ENTRADA DE DADOS: CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]s", nome1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    // Super Poder: Soma de tudo (com inverso da densidade)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + (1.0f / densidade1);

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]s", nome2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + (1.0f / densidade2);

    // --- COMPARAÇÃO E RESULTADOS ---
    // O resultado de uma comparação (x > y) em C é 1 (verdadeiro) ou 0 (falso)
    
    printf("\n=================================");
    printf("\n   RESULTADO DA COMPARAÇÃO");
    printf("\n=================================");
    
    // Para densidade, quem tem MENOR valor vence
    printf("\nPopulação: Carta 1 venceu (%d)", populacao1 > populacao2);
    printf("\nÁrea: Carta 1 venceu (%d)", area1 > area2);
    printf("\nPIB: Carta 1 venceu (%d)", pib1 > pib2);
    printf("\nPontos Turísticos: Carta 1 venceu (%d)", pontos1 > pontos2);
    printf("\nDensidade Populacional: Carta 1 venceu (%d)", densidade1 < densidade2); // Lógica invertida
    printf("\nPIB per Capita: Carta 1 venceu (%d)", pibPerCapita1 > pibPerCapita2);
    printf("\nSuper Poder: Carta 1 venceu (%d)", superPoder1 > superPoder2);
    
    printf("\n=================================\n");

    return 0;
}