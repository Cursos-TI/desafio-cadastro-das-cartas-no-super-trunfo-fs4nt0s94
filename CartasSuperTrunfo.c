#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    char estado;
    char codigocarta [20];
    char nomedacidade [50];
    int populacao, pontosturisticos;
    float areakm, pib;

    printf("Digite o Estado:\n");
    scanf("%d", &estado);

    printf("Digite o Codigo da Carta:\n");
    scanf("%s", &codigocarta);

    printf("Digite o nome da Cidade\n");
    scanf("%s", &nomedacidade);

    printf("Digite a População da Cidade\n");
    scanf("%d", &populacao);

    printf("Digite Quantos Pontos Turisticos tem na cidade");
    scanf("%d", &pontosturisticos);

    printf("Digite a Area da cidade em KM");
    scanf("%f", &areakm);

    printf("Digite o PIB da cidade");
    scanf("%f", &pib);
    

    return 0;
}
