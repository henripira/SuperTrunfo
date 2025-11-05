#include <stdio.h>

int main(){
    //variaveis a serem usadas no projeto
    char estado;
    char cidade[25];
    char codigo[4]; // Aumentei o tamanho para 3 caracteres + \0

    int populacao, p_turistico, carta; // Correção no nome da variável: populacao
    float area, pib;

    //-----------Primeira Carta para cadastro---------------

    carta = 1;
    //cadastrando o estado pela letra inicial de A até H
    printf("Insira a inicial do Estado de A - H: ");
    scanf(" %c", &estado);
    
    //cadastrando o codigo da cidade, exemplo: A01, B05
    printf("Insira o codigo da cidade: ");
    scanf("%s", codigo);
    
    //Cadastro do nome da cidade, podendo ser cidade de dois nomes, como Sao Paulo
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);
    
    //cadastro do total da populacao em numeros inteiros
    printf("Insira a população: ");
    scanf("%d", &populacao);
    
    //cadastro da area da cidade em metros quadrados
    printf("Insira a area total: ");
    scanf("%f", &area);
    
    //total da receita bruta gerada pela cidade
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);
    
    //total de locais para passeio
    printf("Insira o total de pontos turísticos: ");
    scanf("%d", &p_turistico);
    
    //mostrando dados da primeira carta
    printf("\n--- Cidade Cadastrada ---\n"); // Adicionei \n para melhor formatação
    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade); // Agora o nome da cidade deve aparecer corretamente
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("Número de Pontos Turísticos: %d\n", p_turistico);
    
    printf("Cadastro com sucesso!\n");
    //-----------Segunda Carta para cadastro---------------
    
    printf("\nCadastro da segunda Carta!\n");
    carta ++;
    printf("\nInsira a inicial do Estado de A - H: ");
    scanf(" %c", &estado);

    printf("Insira o codigo da cidade 2: ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade 2: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%d", &populacao);

    printf("Insira a area total: ");
    scanf("%f", &area);

    printf("Insira o PIB da cidade 2: ");
    scanf("%f", &pib);

    printf("Insira o total de pontos turísticos: ");
    scanf("%d", &p_turistico);

    printf("\n--- Cidade Cadastrada ---\n"); // Adicionei \n para melhor formatação
    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade); // Agora o nome da cidade deve aparecer corretamente
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("Número de Pontos Turísticos: %d\n", p_turistico);
    printf("Cadastro com sucesso!\n");

    return 0;
}