#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int população1, população2, pontost1, pontost2;
  char codigo1, codigo2, estado1, estado2, cidade1, cidade2;
  float area1, area2, pib1, pib2;
  
  // Área para entrada de dados
  //cadastrando a primeira carta
  printf("Primeiro, cadastre a primeira carta. Nome da Cidade: \n");
  scanf("%c", &cidade1);
  
  printf("Estado: \n");
  scanf("%c", &estado1);
  
  
  printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
  scanf("%c", &codigo1);
  
  printf("Número de habitantes da cidade:\n");
  scanf("%d", &população1);
  
  printf("A área da cidade em quilômetros quadrados:\n");
  scanf("%f", &area1);
  
  printf("O Produto Interno Bruto da cidade:\n");
  scanf("%f", &pib1);
  
  printf("A quantidade de pontos turísticos na cidade:\n");
  scanf("%d", &pontost1);
  
  //cadastrando a segunda carta
  printf("Agora faça o cadastro da segunda carta: Nome da Cidade: \n");
  scanf("%c", &cidade2);
  
  printf("Estado: \n");
  scanf("%c", &estado2); 
  
  printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
  scanf("%c", &codigo2);
   
  printf("Número de habitantes da cidade:\n");
  scanf("%d", &população2);
  
  printf("A área da cidade em quilômetros quadrados:\n");
  scanf("%f", &area2);
   
  printf("O Produto Interno Bruto da cidade:\n");
  scanf("%f", &pib2);
   
  printf("A quantidade de pontos turísticos na cidade:\n");
  scanf("%d", &pontost2);
  // Área para exibição dos dados da cidade
  
  //imprimindo a carta 1
  printf("Carta: %c.\n", cidade1);
  printf("Estado: %c.\n", estado1);
  printf("Código: %c.\n", codigo1);
  printf("População: %d habitantes-.\n", população1);
  printf("Área: %f km².\n", area1);
  printf("PIB: %f.\n", pib1);
  printf("Número de pontos turísticos: %d.\n", pontost1);
  
  //imprimindo a carta 2
  printf("Carta: %c.\n", cidade2);
  printf("Estado: %c.\n", estado2);
  printf("Código: %c.\n", codigo2);
  printf("População: %d habitantes-.\n", população2);
  printf("Área: %f km².\n", area2);
  printf("PIB: %f.\n", pib2);
  printf("Número de pontos turísticos: %d.\n", pontost2);
  
  return 0;
} 
