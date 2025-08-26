#include <stdio.h>

struct Carta{

    char estado;           // Letra do Estado: 'A' a 'E'
    char codigo[4];        // Código da carta: Ex: "A01", "B01","C01"
    char nomecidade[50];   // Nome da cidade
    int populacao;         // Número de habitantes
    float area;            // Tamanho em km²
    float pib;             // PIB em bilhões
    int pontost;           // Número de pontos turísticos
};
    
int main(){

    struct Carta carta1, carta2;

    printf("===Cadastro da carta 1===\n");

    printf("estado (A-E):");
    scanf(" %c", &carta1.estado);

    printf("Código da carta (Ex:A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomecidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área: ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontost);

    printf("===Cadastro da carta 2===\n");

    printf("estado (A-E):");
    scanf(" %c", &carta2.estado);

    printf("Código da carta (Ex:A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomecidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área: ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontost);     

    // Exibir os dados das cartas

    printf("===Carta 1===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da carta: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomecidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de pontos tuísticos: %d\n", carta1.pontost);


    printf("===Carta 2===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomecidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de pontos tuísticos: %d\n", carta2.pontost);



    return 0;
    }


    
    