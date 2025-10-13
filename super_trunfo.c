#include <stdio.h>

int main() {
    char cartaA = 'A';
    char cartaB = 'B';
    char estado_1, estado_2;
    char codigo_1[5], codigo_2[5];
    char nome_cidade_1[50], nome_cidade_2[50];
    unsigned long int populacao_1, populacao_2;
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
    scanf("%u", &populacao_1);

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
    scanf("%u", &populacao_2);

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
    printf("População: %u\n", populacao_1);
    printf("Área: %.2f km²\n", area_km_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_1);

    densidade_populacional_1 = (float)populacao_1 / area_km_1; // Cálculo da densidade populacional
    pib_per_capita_1 = (pib_1 * 1000000000) / (float)populacao_1; // Convertendo PIB de bilhões para reais
    
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %c%s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s\n", nome_cidade_2);
    printf("População: %u\n", populacao_2);
    printf("Área: %.2f km²\n", area_km_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Pontos turísticos: %d\n", numero_ponto_turistico_2);


    densidade_populacional_2 = (float) populacao_2 / area_km_2; // Cálculo da densidade populacional
    pib_per_capita_2 = (pib_2 * 1000000000) / (float) populacao_2; // Convertendo PIB de bilhões para reais
    
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);


    //comparações super poder total de cada um
    float super_poder_1, super_poder_2;

    super_poder_1 = (float)populacao_1 + area_km_1 + (pib_1 * 1000000000) + (float)numero_ponto_turistico_1 + pib_per_capita_1 + (1.0f / densidade_populacional_1);
    super_poder_2 = (float)populacao_2 + area_km_2 + (pib_2 * 1000000000) + (float)numero_ponto_turistico_2 + pib_per_capita_2 + (1.0f / densidade_populacional_2);

    printf("Super Poder Carta 1: %.2f\n", super_poder_1);
    printf("Super Poder Carta 2: %.2f\n", super_poder_2);

    //comparação entre atributos em comum e qual ganha

    // int populacao_final = (float)populacao_1 > (float)populacao_2;
    // int area_final = area_km_1 > area_km_2;
    // int pib_final = pib_1 > pib_2;
    // int pontos_turisticos_final = numero_ponto_turistico_1 > numero_ponto_turistico_2;
    // int densidade_populacional_final = densidade_populacional_1 < densidade_populacional_2; // Menor densidade é melhor
    // int pib_per_capita_final = pib_per_capita_1 > pib_per_capita_2;
    // int super_poder_final = super_poder_1 > super_poder_2;

    // printf("\nComparação de Cartas:\n");
    // printf("População: Carta %d venceu (%d)\n", populacao_final ? 1 : 2, populacao_final);
    // printf("Área: Carta %d venceu (%d)\n", area_final ? 1 : 2, area_final);
    // printf("PIB: Carta %d venceu (%d)\n", pib_final ? 1 : 2, pib_final);
    // printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos_final ? 1 : 2, pontos_turisticos_final);
    // printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_populacional_final ? 1 : 2, densidade_populacional_final);
    // printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per_capita_final ? 1 : 2, pib_per_capita_final);
    // printf("Super Poder: Carta %d venceu (%d)\n", super_poder_final ? 1 : 2, super_poder_final);

    // Comparação por população
    printf("\nComparação de cartas (Atributo: Poupulação): \n");
    printf("Carta 1 - %s (%c): %u\n", nome_cidade_1, estado_1, populacao_1 );
    printf("Carta 2 - %s (%c): %u\n", nome_cidade_2, estado_2, populacao_2 );

    if(populacao_1 > populacao_2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade_1);
    }else{
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade_2);
    }

    return 0;
}