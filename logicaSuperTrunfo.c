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

     // Exibição dos dados da primeira carta
     printf("\nDados da Carta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nomeCidade1);
     printf("População: %lu\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
     printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

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

    // Exibição dos dados da segunda carta
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação do atributo escolhido (neste caso, PIB)
    float atributo1 = pib1; // Atributo da Carta 1
    float atributo2 = pib2; // Atributo da Carta 2
    char* atributoNome = "PIB"; // Nome do atributo

    // Determinar a carta vencedora
    if (atributo1 > atributo2) {
        printf("\nA carta vencedora é: %s\n", nomeCidade1);
        printf("Atributo: %s\n", atributoNome);
        printf("Valor da carta 1: %.2f bilhões de reais\n", atributo1);
        printf("Valor da carta 2: %.2f bilhões de reais\n", atributo2);
    } else if (atributo1 < atributo2) {
        printf("\nA carta vencedora é: %s\n", nomeCidade2);
        printf("Atributo: %s\n", atributoNome);
        printf("Valor da carta 1: %.2f bilhões de reais\n", atributo1);
        printf("Valor da carta 2: %.2f bilhões de reais\n", atributo2);
    } else {
        printf("\nAs cartas são iguais empatou!!! (%s).\n", atributoNome);
    }
    return 0;

}