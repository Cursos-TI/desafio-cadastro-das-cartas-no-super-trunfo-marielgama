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
    char estado[50], cidade[50], codcarta[50], estado2[50], cidade2[50], codcarta2[50] ;
    int populacao, pontosturisticos, populacao2, pontosturisticos2;
    float area, pib, area2, pib2;

    printf("\n\n");
    printf("\nCARTA 1:\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);   
    printf("Digite o código da carta: \n");
    scanf("%s", &codcarta);  
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);  
    printf("Digite o número da população da cidade: \n");
    scanf("%d", &populacao);  
    printf("Digite a área (Km²) da cidade: \n");
    scanf("%f", &area); 
    printf("Digite o produto interno bruto(PIB): \n");
    scanf("%f", &pib); 
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos); 

     printf("\n\n");
    printf("\nCARTA 2:\n");
    printf("Digite o nome do estado: \n");
    scanf("%s", &estado2);   
    printf("Digite o código da carta: \n");
    scanf("%s", &codcarta2);  
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);  
    printf("Digite o número da população da cidade: \n");
    scanf("%d", &populacao2);  
    printf("Digite a área (Km²) da cidade: \n");
    scanf("%f", &area2); 
    printf("Digite o produto interno bruto(PIB): \n");
    scanf("%f", &pib2); 
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2); 


    printf("\n");
    printf("CARTA 1\n");
    printf("Nome do estado: %s\n", estado);
    printf("Código da Carta: %s\n", codcarta);
    printf("Cidade: %s\n", cidade);
    printf("População da Cidade: %d\n", populacao);
    printf("Área da cidade: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosturisticos);

    printf("\n");
    printf("CARTA 2\n");
    printf("Nome do estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População da Cidade: %d\n", populacao2);
    printf("Área da cidade: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosturisticos2);
    

    return 0;
}
