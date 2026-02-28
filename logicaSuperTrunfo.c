#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Aventureiro: Adicionando interatividade e lógica de comparação

int main() {
    //  1. Definição das variáveis -
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1; // Novo atributo calculado

    // Variáveis d Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2; // Novo atributo calculado

    int opcao; // Variável para armazenar a escolha do menu

    // -- 2. Cadastro das Cartas -
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da Densidade Demográfica da Carta 1
    // Convertendo população (int) para float temporariamente para o cálculo ser exato
    densidade1 = (float)populacao1 / area1;

    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Demográfica da Carta 2
    densidade2 = (float)populacao2 / area2;

    // - 3. Menu Interativo --
    // Exibindo as opções de comparação na tela
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("Escolha um atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a sua opcao: ");
    scanf("%d", &opcao);

    // --- 4. Comparação cartas e Resultados -
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // A estrutura switch avalia a 'opcao' digitada pelo usuário e executa o bloco correspondente
    switch(opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            
            // Regra: maior vence
            if (populacao1 > populacao2) {
                printf("Vencedora: Carta 1 (%s)!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break; // O break encerra o switch para ele não rodar os próximos cases

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f km2\n", cidade1, area1);
            printf("%s: %.2f km2\n", cidade2, area2);
            
            if (area1 > area2) {
                printf("Vencedora: Carta 1 (%s)!\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedora: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhoes\n", cidade1, pib1);
            printf("%s: %.2f bilhoes\n", cidade2, pib2);
            
            if (pib1 > pib2) {
                printf("Vencedora: Carta 1 (%s)!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedora: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Numero de Pontos Turisticos\n");
            printf("%s: %d pontos\n", cidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", cidade2, pontosTuristicos2);
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedora: Carta 1 (%s)!\n", cidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedora: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica (Regra: Menor valor vence)\n");
            printf("%s: %.2f hab/km2\n", cidade1, densidade1);
            printf("%s: %.2f hab/km2\n", cidade2, densidade2);
            
            // Regra Invertida: Menor vence! Observe o sinal de menor (<)
            if (densidade1 < densidade2) {
                printf("Vencedora: Carta 1 (%s)!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            // Este bloco roda se o usuário digitar qualquer número diferente de 1 a 5
            printf("Opcao invalida! Por favor, escolha um numero de 1 a 5 no menu.\n");
            break;
    }

    return 0;
}