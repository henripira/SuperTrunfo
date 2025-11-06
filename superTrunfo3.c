
#include <stdio.h>

// Variáveis globais
char estadoA, estadoB;
char cidadeA[25], cidadeB[25];
char codigoA[4], codigoB[4];
unsigned long int populacaoA, populacaoB;
int pontoTuristicoA, pontoTuristicoB, cartaA, cartaB;
float areaA, areaB, pibA, pibB, densidadeA, densidadeB, pibpercapitaA, pibpercapitaB, superPoderA, superPoderB;

// Funções de entrada
void entradaDados(char *cidade, char *codigo, char *estado, unsigned long int *populacao, float *area, float *pib, int *pontos) {
    printf("\n --Cadastro de Carta-- \n");

    printf("Insira a inicial do Estado de A - H: ");
    scanf(" %c", estado);

    printf("Insira o codigo da cidade: ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%lu", populacao);

    printf("Insira a área total: ");
    scanf("%f", area);

    printf("Insira o PIB da cidade: ");
    scanf("%f", pib);

    printf("Insira o total de pontos turísticos: ");
    scanf("%d", pontos);
}

// Funções de saída
void saidaDados(int carta, char estado, char *codigo, char *cidade, unsigned long int populacao, float area, float pib, int pontos, float densidade, float pibpercapita) {
    printf("\nCarta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
}

// Funções de cálculo
float calcularPibPerCapita(float pib, unsigned long int populacao) {
    return (pib * 1e9) / populacao;
}

float calcularDensidade(unsigned long int populacao, float area) {
    return populacao / area;
}

float calcularSuperPoder(unsigned long int populacao, float area, float pib, int pontos, float pibpercapita, float densidade) {
    return (float)populacao + area + (pib * 1e9) + (float)pontos + pibpercapita - densidade;
}

// Comparações
void comparacoes() {
    printf("\n--- Comparações ---\n");
    printf("População: %s\n", populacaoA > populacaoB ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", areaA > areaB ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", pibA > pibB ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turísticos: %s\n", pontoTuristicoA > pontoTuristicoB ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", densidadeA > densidadeB ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB per Capita: %s\n", pibpercapitaA > pibpercapitaB ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", superPoderA > superPoderB ? "Carta 1 venceu" : "Carta 2 venceu");
}

// Função principal
int main() {
    // Primeira carta
    cartaA = 1;
    entradaDados(cidadeA, codigoA, &estadoA, &populacaoA, &areaA, &pibA, &pontoTuristicoA);
    pibpercapitaA = calcularPibPerCapita(pibA, populacaoA);
    densidadeA = calcularDensidade(populacaoA, areaA);
    superPoderA = calcularSuperPoder(populacaoA, areaA, pibA, pontoTuristicoA, pibpercapitaA, densidadeA);
    saidaDados(cartaA, estadoA, codigoA, cidadeA, populacaoA, areaA, pibA, pontoTuristicoA, densidadeA, pibpercapitaA);

    // Segunda carta
    cartaB = 2;
    entradaDados(cidadeB, codigoB, &estadoB, &populacaoB, &areaB, &pibB, &pontoTuristicoB);
    pibpercapitaB = calcularPibPerCapita(pibB, populacaoB);
    densidadeB = calcularDensidade(populacaoB, areaB);
    superPoderB = calcularSuperPoder(populacaoB, areaB, pibB, pontoTuristicoB, pibpercapitaB, densidadeB);
    saidaDados(cartaB, estadoB, codigoB, cidadeB, populacaoB, areaB, pibB, pontoTuristicoB, densidadeB, pibpercapitaB);

    // Comparações
    comparacoes();

    return 0;
}
