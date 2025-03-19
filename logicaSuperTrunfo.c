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

    // Menu para escolher o primeiro atributo
    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // Menu para escolher o segundo atributo
    do {
        printf("\nEscolha o segundo atributo para comparação (não pode ser o mesmo que o primeiro):\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Popul acional\n");
        printf("Opção: ");
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    // Comparação dos atributos escolhidos
    float valor1, valor2;
    char* nomeAtributo1;
    char* nomeAtributo2;

    // Atribuindo valores e nomes de atributos
    switch (atributo1) {
        case 1: valor1 = populacao1; valor2 = populacao2; nomeAtributo1 = "População"; break;
        case 2: valor1 = area1; valor2 = area2; nomeAtributo1 = "Área"; break;
        case 3: valor1 = pib1; valor2 = pib2; nomeAtributo1 = "PIB"; break;
        case 4: valor1 = pontosTuristicos1; valor2 = pontosTuristicos2; nomeAtributo1 = "Número de Pontos Turísticos"; break;
        case 5: valor1 = densidadePopulacional1; valor2 = densidadePopulacional2; nomeAtributo1 = "Densidade Populacional"; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    switch (atributo2) {
        case 1: valor1 += populacao1; valor2 += populacao2; nomeAtributo2 = "População"; break;
        case 2: valor1 += area1; valor2 += area2; nomeAtributo2 = "Área"; break;
        case 3: valor1 += pib1; valor2 += pib2; nomeAtributo2 = "PIB"; break;
        case 4: valor1 += pontosTuristicos1; valor2 += pontosTuristicos2; nomeAtributo2 = "Número de Pontos Turísticos"; break;
        case 5: valor1 += densidadePopulacional1; valor2 += densidadePopulacional2; nomeAtributo2 = "Densidade Populacional"; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparação dos atributos
    printf("\nComparando %s e %s:\n", nomeAtributo1, nomeAtributo2);
    printf("%s de %s: %.2f\n", nomeAtributo1, nomeCidade1, valor1);
    printf("%s de %s: %.2f\n", nomeAtributo1, nomeCidade2, valor2);

    // Determinando o vencedor
    int vencedor = (atributo1 == 5) ? (valor1 < valor2) : (valor1 > valor2);
    if (vencedor) {
        printf("A carta vencedora é: %s\n", nomeCidade1);
    } else if (valor1 == valor2) {
        printf("Empate!\n");
    } else {
        printf("A carta vencedora é: %s\n", nomeCidade2);
    }

    // Soma dos atributos
    float soma1 = valor1, soma2 = valor2;
    printf("\nSoma dos atributos:\n");
    printf("Soma de %s: %.2f\n", nomeCidade1, soma1);
    printf("Soma de %s: %.2f\n", nomeCidade2, soma2);

    // Verificando empate na soma
    if (soma1 == soma2) {
        printf("Empate na soma dos atributos!\n");
    } else {
        printf("A carta vencedora na soma é: %s\n", (soma1 > soma2) ? nomeCidade1 : nomeCidade2);
    }
    
    return 0;

}