#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
printf("Desafio Super Trunfo \n");

char Estado_Carta1 [20];
char Codigo_Carta1[4];
char Cidade_Carta1[50];
int Populacao_Carta1;
float Area_Carta1;
float Pib_Carta1;
int PontoTuristico_Carta1;

// Dados da Primeira Carta---

printf("---Cadastro da Primeira Carta ---\n");

printf("Digite o Estado da Carta: ");
scanf("%s", Estado_Carta1);

printf("Digite o Codigo da Carta (ex: P01): ");
scanf("%s", Codigo_Carta1);

printf("Digite o nome da Cidade: ");
scanf("%s", Cidade_Carta1);

printf("Digite a Populacao: ");
scanf("%d", &Populacao_Carta1);

printf("Digite a Area em Km²: ");
scanf("%f", &Area_Carta1);

printf("Digite o Pib: ");
scanf("%f", &Pib_Carta1);

printf("Digite o Numero de Pontos Turisticos: ");
scanf("%d", &PontoTuristico_Carta1);

// ---Saidas de Dados para a Primeira Carta ---

printf("Estado: %s\n", Estado_Carta1);
printf("Codigo: %s\n", Codigo_Carta1);
printf("Nome da Cidade: %s\n", Cidade_Carta1);
printf("Populacao: %d\n", Populacao_Carta1);
printf("Area em Km²: %F\n", Area_Carta1);
printf("Numero do Pib: %f\n", Pib_Carta1);
printf("Numeros de Pontos Turisticos: %d\n", PontoTuristico_Carta1);




} 
