#include <stdio.h>
#include <string.h> // biblioteca para usar strcspn

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;


    // Leitura dos dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer do newline
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); // Lê até a nova linha
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0; // Remove o newline no final
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1e9) / (float)populacao1; // Convertendo PIB para reais

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
  

    // Leitura dos dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    getchar(); // Limpa o buffer do newline
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); // Lê até a nova linha
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0; // Remove o newline no final
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1e9) / (float)populacao2; // Convertendo PIB para reais

    // Menu interativo
    int opcao;
    do {
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: { // Comparar População
                printf("\nComparando População:\n");
                if (populacao1 > populacao2) {
                    printf("A carta vencedora é: %s\n", nomeCidade1);
                } else if (populacao1 < populacao2) {
                    printf("A carta vencedora é: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            }
            case 2: { // Comparar Área
                printf("\nComparando Área:\n");
                if (area1 > area2) {
                    printf("A carta vencedora é: %s\n", nomeCidade1);
                } else if (area1 < area2) {
                    printf("A carta vencedora é: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            }
            case 3: { // Comparar PIB
                printf("\nComparando PIB:\n");
                if (pib1 > pib2) {
                    printf("A carta vencedora é: %s\n", nomeCidade1);
                } else if (pib1 < pib2) {
                    printf("A carta vencedora é: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            }
            case 4: { // Comparar Número de Pontos Turísticos
                printf("\nComparando Número de Pontos Turísticos:\n");
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("A carta vencedora é: %s\n", nomeCidade1);
                } else if (pontosTuristicos1 < pontosTuristicos2) {
                    printf("A carta vencedora é: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            }
            case 5: { // Comparar Densidade Populacional
                printf("\nComparando Densidade Populacional:\n");
                if (densidadePopulacional1 < densidadePopulacional2) {
                    printf("A carta vencedora é: %s\n", nomeCidade1);
                } else if (densidadePopulacional1 > densidadePopulacional2) {
                    printf("A carta vencedora é: %s\n", nomeCidade2);
                } else {
                    printf("Empate!\n");
                }
                break;
            }
            case 0: // Sair
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
    
    return 0;

}