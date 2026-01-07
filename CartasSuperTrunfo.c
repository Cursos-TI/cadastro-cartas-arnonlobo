#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Dados das Cartas
    char pais1[] = "Brasil", pais2[] = "Argentina";
    unsigned long int pop1 = 214000000, pop2 = 45000000;
    float area1 = 8515000, area2 = 2780000;
    float pib1 = 1.6, pib2 = 0.5;
    float dens1 = (float)pop1 / area1, dens2 = (float)pop2 / area2;

    int attr1, attr2;
    float val1_attr1, val1_attr2, val2_attr1, val2_attr2;

    printf("=== Super Trunfo: Batalha Final ===\n\n");

    // --- PRIMEIRO MENU ---
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1. População | 2. Área | 3. PIB | 4. Densidade\n");
    printf("Opção: ");
    scanf("%d", &attr1);

    // --- SEGUNDO MENU DINÂMICO ---
    printf("\nEscolha o SEGUNDO atributo (não escolha o mesmo):\n");
    if (attr1 != 1) printf("1. População\n");
    if (attr1 != 2) printf("2. Área\n");
    if (attr1 != 3) printf("3. PIB\n");
    if (attr1 != 4) printf("4. Densidade\n");
    printf("Opção: ");
    scanf("%d", &attr2);

    if (attr1 == attr2) {
        printf("\nERRO: Você escolheu atributos iguais. Reinicie o programa.\n");
        return 1;
    }

    // --- LÓGICA DE ATRIBUIÇÃO DE VALORES (Switch Aninhado) ---
    // Atributo 1
    switch(attr1) {
        case 1: val1_attr1 = pop1; val2_attr1 = pop2; break;
        case 2: val1_attr1 = area1; val2_attr1 = area2; break;
        case 3: val1_attr1 = pib1; val2_attr1 = pib2; break;
        case 4: val1_attr1 = dens1; val2_attr1 = dens2; break;
    }

    // Atributo 2
    switch(attr2) {
        case 1: val1_attr2 = pop1; val2_attr2 = pop2; break;
        case 2: val1_attr2 = area1; val2_attr2 = area2; break;
        case 3: val1_attr2 = pib1; val2_attr2 = pib2; break;
        case 4: val1_attr2 = dens1; val2_attr2 = dens2; break;
    }

    // --- CÁLCULO DA SOMA ---
    // Importante: Para densidade (attr 4), usamos valor negativo ou inverso na soma para a lógica "menor vence"
    float soma1 = (attr1 == 4 ? -val1_attr1 : val1_attr1) + (attr2 == 4 ? -val1_attr2 : val1_attr2);
    float soma2 = (attr1 == 4 ? -val2_attr1 : val2_attr1) + (attr2 == 4 ? -val2_attr2 : val2_attr2);

    // --- EXIBIÇÃO DOS RESULTADOS ---
    printf("\n=================================\n");
    printf("RESULTADO DA BATALHA:\n");
    printf("%s vs %s\n", pais1, pais2);
    printf("---------------------------------\n");

    // Comparação do Atributo 1 usando Operador Ternário
    printf("Atributo 1: %s\n", (attr1 == 4 ? (val1_attr1 < val2_attr1 ? "Carta 1 Vence" : "Carta 2 Vence") : (val1_attr1 > val2_attr1 ? "Carta 1 Vence" : "Carta 2 Vence")));
    
    // Resultado Final
    printf("\nSoma Final %s: %.2f\n", pais1, soma1);
    printf("Soma Final %s: %.2f\n", pais2, soma2);

    if (soma1 > soma2) {
        printf("\n*** %s VENCEU A RODADA! ***\n", pais1);
    } else if (soma2 > soma1) {
        printf("\n*** %s VENCEU A RODADA! ***\n", pais2);
    } else {
        printf("\n*** EMPATE TÉCNICO! ***\n");
    }
    printf("=================================\n");

    return 0;
}