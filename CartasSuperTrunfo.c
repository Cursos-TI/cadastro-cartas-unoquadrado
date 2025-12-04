#include <stdio.h>

int main() {
    // dados da primeira carta
    char codigo[4];
    char cidade[50];
    int populacao, pontos_turisticos;
    float area, pib;
    
    printf("=== CADASTRAR CARTA DO SUPER TRUNFO ===\n\n");
    
    
    printf("Digite o codigo: ");
    scanf("%s", codigo);
    

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade);
    

    printf("Digite a populacao: ");
    scanf("%d", &populacao);
    

    printf("Digite a area em km²: ");
    scanf("%f", &area);
    

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib);
    

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);
    
    
    printf("\n\n=== CARTA CADASTRADA ===\n");
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos Turisticos: %d\n", pontos_turisticos);
    
    
    return 0;
}