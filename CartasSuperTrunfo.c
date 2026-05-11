#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo_Carta[4];
  char cidade[20];
  int populacao;
  float area_Km;
  float pib;
  int num_Pontos_Turisticos;
  // Área para entrada de dados
  printf("___Preencha as informações abaixo para cadastrar a Carta 1___ \n");
  printf("Digite uma letra entre (A-H) que represente um Estado: \n");
  scanf("%c", &estado);
  printf("Digite o código da carta (ex: A01, B03): \n");
  scanf(" %s", &codigo_Carta);
  printf("Digite o nome da Cidade: \n");
  scanf(" %[^\n]s", cidade);
  printf("Digite a população dessa cidade: \n");
  scanf(" %i", &populacao);
  printf("Digite a Área em km² da cidade (ex: 1500.00): \n");
  scanf(" %f", &area_Km);
  printf("Digite o PIB (ex: 699.28): \n");
  scanf(" %f", &pib);
  printf("Digite a quantidade de pontos turísticos: \n");
  scanf(" %i", &num_Pontos_Turisticos);
  // Área para exibição dos dados da cidade
  printf("----- CARTA 1 ----- \n");
  printf("Estado: %c\n", estado);
  printf("Código: %s\n", codigo_Carta);
  printf("Cidade: %s\n", cidade);
  printf("População: %i habitantes\n", populacao);
  printf("Área: %.2f km²\n", area_Km);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Número de Pontos Turísticos: %i\n", num_Pontos_Turisticos);
return 0;
}