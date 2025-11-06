#include <stdio.h>
//variaveis a serem usadas no projeto
char estado; 
char cidade[25]; 
char codigo[4];
int populacao, p_turistico, carta;
float area, pib, densidade, pibpercapita, calculo;

void entradaDados(){
    printf("\n --Cadastro de Carta-- \n");
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
}

void saidaDados(){
    printf("\nCarta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais.\n", pib);
    printf("Número de Pontos Turísticos: %d\n", p_turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
}

float pibperCapita(float a,int b){

    calculo = (a * 1000000000) / (float) b;
    return calculo;
}

float densidadePopulacional(int a, float b){
    calculo = (float) a / b;
    return calculo;
}

int main(){
    
    //-----------Primeira Carta para cadastro---------------
    carta = 1;
    entradaDados();

    // atribuindo às variaveis o resultado do calculo da funcao chamada
    pibpercapita = pibperCapita(pib, populacao);
    densidade = densidadePopulacional(populacao,area);
    
    //mostrando dados da primeira carta
    saidaDados();

    //-----------Segunda Carta para cadastro---------------

    carta ++;
    entradaDados();

    // atribuindo às variaveis o resultado do calculo da funcao chamada
    pibpercapita = pibperCapita(pib,populacao);
    densidade = densidadePopulacional(populacao,area);
    
    //mostrando dados da segunda carta
    saidaDados();

    return 0;
}
