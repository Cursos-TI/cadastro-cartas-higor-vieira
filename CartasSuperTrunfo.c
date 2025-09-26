#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, populacao2, pontost1, pontost2;
  char codigo1[5], codigo2[5], estado1[3], estado2[3], cidade1[100], cidade2[100];
  float area1, area2, pib1, pib2;
  
  // Área para entrada de dados
  //cadastrando a primeira carta
    printf("Primeiro, cadastre a primeira carta.\n");
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade1);
  
    printf("Estado (Uma letra de 'A' a 'H' representando um dos oito estados).: \n");
    scanf(" %s", estado1);
  
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf(" %s", codigo1);
  
    printf("Número de habitantes da cidade:\n");
    scanf("%d", &populacao1);
  
    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);
  
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib1);
  
    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontost1);
  
  //cadastrando a segunda carta
    printf("Agora, cadastre a segunda carta.\n");
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade2);
  
  
    printf("Estado (Uma letra de 'A' a 'H' representando um dos oito estados).: \n");
    scanf(" %s", estado2); 
  
    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    scanf(" %s", codigo2);
   
    printf("Número de habitantes da cidade:\n");
    scanf("%d", &populacao2);
  
    printf("A área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
   
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib2);
   
    printf("A quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontost2);
  // Área para exibição dos dados da cidade
  
  //imprimindo a carta 1
    printf("Carta: %s.\n", cidade1);
    printf("Estado: %s.\n", estado1);
    printf("Código: %s.\n", codigo1);
    printf("População: %d habitantes.\n", populacao1);
    printf("Área: %.2f km².\n", area1);
    printf("PIB:R$ %.2f bilhões.\n", pib1);
    printf("Número de pontos turísticos: %d.\n", pontost1);
  
  //imprimindo a carta 2
    printf("Carta: %s.\n", cidade2);
    printf("Estado: %s.\n", estado2);
    printf("Código: %s.\n", codigo2);
    printf("População: %d habitantes.\n", populacao2);
    printf("Área: %.2f km².\n", area2);
    printf("PIB:R$ %.2f bilhões.\n", pib2);
    printf("Número de pontos turísticos: %d.\n", pontost2);
  
  return 0;
}
