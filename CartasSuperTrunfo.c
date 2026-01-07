#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // --- CADASTRO DOS DADOS ---
    printf("--- Cadastro de Cartas Super Trunfo ---\n");

    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado); // O espaço antes de %c ignora o "Enter" anterior

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nomeCidade); // Lê o nome mesmo com espaços (ex: São Paulo)

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // --- EXIBIÇÃO DOS DADOS ---
    printf("\n==========================\n");
    printf("Dados da Cidade Cadastrada:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("==========================\n");

    return 0;
}