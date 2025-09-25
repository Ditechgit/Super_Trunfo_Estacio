#include <stdio.h>

int main() {
    char estado_1, estado_2;
    char codigo_1[5], codigo_2[5];
    char nome_cidade_1[50], nome_cidade_2[50];
    int populacao_1, populacao_2;
    int numero_ponto_turistico_1, numero_ponto_turistico_2;
    float area_km_1, area_km_2;
    float pib_1, pib_2;
    float densidade_populacional_1, densidade_populacional_2;
    float pib_per_capita_1, pib_per_capita_2;

    // Inserir valores
    // Carta 1
    printf("Digite uma letra representando um estado de A a H: ");
    scanf(" %c", &estado_1);

    printf("Digite o codigo de 01 a 04: ");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_1);

    printf("Digite a quantidade populacional: ");
    scanf("%d", &populacao_1);

    printf("Digite a area em KM²: ");
    scanf("%f", &area_km_1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &numero_ponto_turistico_1);

    // Carta 2
    printf("\nDigite o estado de A a H: ");
    scanf(" %c", &estado_2);

    printf("Digite o codigo de 01 a 04: ");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_2);

    printf("Digite a quantidade populacional: ");
    scanf("%d", &populacao_2);

    printf("Digite a area em KM²: ");
    scanf("%f", &area_km_2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &numero_ponto_turistico_2);


    // Visibilidade dos valores inseridos
    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %c%s\n", estado_1, codigo_1);
    printf("Nome da cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_km_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_1);

    densidade_populacional_1 = (float)populacao_1 / area_km_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / (float)populacao_1;
    
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_km_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_2);


    densidade_populacional_2 = (float) populacao_2 / area_km_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / (float) populacao_2;
    
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}