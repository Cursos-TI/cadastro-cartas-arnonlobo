#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Dados das cartas (já pré-definidos para focar na lógica do menu)
    char pais1[] = "Brasil", pais2[] = "Argentina";
    unsigned long int pop1 = 214300000, pop2 = 45810000;
    float area1 = 8515767.0, area2 = 2780400.0;
    float pib1 = 1.61, pib2 = 0.49; // em trilhões
    int pontos1 = 50, pontos2 = 35;
    float densidade1 = pop1 / area1;
    float densidade2 = pop2 / area2;

    int opcao;

    // --- MENU INTERATIVO ---
    printf("--- Super Trunfo: Escolha o Atributo de Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma opção: ");
    
    // Validação básica: se não ler um número, limpa o buffer
    if (scanf("%d", &opcao) != 1) {
        printf("Opção inválida! Digite apenas números.\n");
        while(getchar() != '\n'); 
        return 1;
    }

    printf("\n--- Resultado da Comparação ---\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH ---
    switch (opcao) {
        case 1: // População (Maior vence)
            printf("Atributo: População\n");
            printf("%s: %lu | %s: %lu\n", pais1, pop1, pais2, pop2);
            if (pop1 > pop2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pop2 > pop1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área (Maior vence)
            printf("Atributo: Área\n");
            printf("%s: %.2f | %s: %.2f\n", pais1, area1, pais2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", pais1);
            else if (area2 > area1) printf("Vencedor: %s\n", pais2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade Demográfica (MENOR VENCE)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", pais1, densidade1, pais2, densidade2);
            
            // Lógica invertida conforme o requisito
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (Menor densidade)\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (Menor densidade)\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inexistente no menu.\n");
            break;
    }

    return 0;
}