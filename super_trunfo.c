#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char cartaA = 'A';
    char cartaB = 'B';
    char estado_1, estado_2;
    char codigo_1[5], codigo_2[5];
    char nome_cidade_1[50], nome_cidade_2[50];
    unsigned long int populacao_1, populacao_2;
    int numero_ponto_turistico_1, numero_ponto_turistico_2, escolhaCase;
    float area_km_1, area_km_2;
    float pib_1, pib_2;
    float densidade_populacional_1, densidade_populacional_2;
    float pib_per_capita_1, pib_per_capita_2;

    // Inserir valores ---------------------------------------------------------------------------------------------------------
    // Carta 1 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
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

    // Carta 2 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
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


    // Visibilidade dos valores inseridos ------------------------------------------------------------------------------------------
    // Carta 1 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
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

    // Carta 2 _-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
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


    //comparações super poder total de cada um -------------------------------------------------------------------------------------
    float super_poder_1, super_poder_2;

    super_poder_1 = (float)populacao_1 + area_km_1 + (pib_1 * 1000000000) + (float)numero_ponto_turistico_1 + pib_per_capita_1 + (1.0f / densidade_populacional_1);
    super_poder_2 = (float)populacao_2 + area_km_2 + (pib_2 * 1000000000) + (float)numero_ponto_turistico_2 + pib_per_capita_2 + (1.0f / densidade_populacional_2);

    printf("\nSuper Poder Carta 1: %.2f\n", super_poder_1);
    printf("Super Poder Carta 2: %.2f\n", super_poder_2);

    //comparação entre atributos em comum e qual ganha ------------------------------------------------------------------------------

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
    
    // Comparação por escolha de atibuto ---------------------------------------------------------------------------------------
    int atributo1, atributo2;

    do {
        printf("\nEscolha o primeiro atributo para comparar:\n");
        // lista de atributos...
        scanf("%d", &atributo1);

        printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
        // lista de atributos, mas exclua o atributo1
        scanf("%d", &atributo2);

        if (atributo1 == atributo2) {
            printf("Você escolheu o mesmo atributo duas vezes. Tente novamente.\n");
        }
    } while (atributo1 == atributo2);

    printf("\nEscolha qual atributo você gostaria de comparar: \n");
    printf("1 - Nome do País (Não possui comparação)\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade Demográfica\n");


    float valor1_carta1 = 0, valor1_carta2 = 0;
float valor2_carta1 = 0, valor2_carta2 = 0;

// Primeiro atributo
switch (atributo1) {
    case 2:
        printf("\nComparação (População):\n");
        printf("Carta 1 - %s: %lu\n", nome_cidade_1, populacao_1);
        printf("Carta 2 - %s: %lu\n", nome_cidade_2, populacao_2);
        valor1_carta1 = populacao_1;
        valor1_carta2 = populacao_2;
        break;
    case 3:
        printf("\nComparação (Área):\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade_1, area_km_1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade_2, area_km_2);
        valor1_carta1 = area_km_1;
        valor1_carta2 = area_km_2;
        break;
    case 4:
        printf("\nComparação (PIB):\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade_1, pib_1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade_2, pib_2);
        valor1_carta1 = pib_1;
        valor1_carta2 = pib_2;
        break;
    case 5:
        printf("\nComparação (Pontos Turísticos):\n");
        printf("Carta 1 - %s: %d\n", nome_cidade_1, numero_ponto_turistico_1);
        printf("Carta 2 - %s: %d\n", nome_cidade_2, numero_ponto_turistico_2);
        valor1_carta1 = numero_ponto_turistico_1;
        valor1_carta2 = numero_ponto_turistico_2;
        break;
    case 6:
        printf("\nComparação (Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f\n", nome_cidade_1, densidade_populacional_1);
        printf("Carta 2 - %s: %.2f\n", nome_cidade_2, densidade_populacional_2);
        valor1_carta1 = densidade_populacional_1;
        valor1_carta2 = densidade_populacional_2;
        break;
    default:
        printf("Atributo inválido!\n");
        return 1;
}

// Segundo atributo
switch (atributo2) {
    case 2: valor2_carta1 = populacao_1; valor2_carta2 = populacao_2; break;
    case 3: valor2_carta1 = area_km_1; valor2_carta2 = area_km_2; break;
    case 4: valor2_carta1 = pib_1; valor2_carta2 = pib_2; break;
    case 5: valor2_carta1 = numero_ponto_turistico_1; valor2_carta2 = numero_ponto_turistico_2; break;
    case 6: valor2_carta1 = densidade_populacional_1; valor2_carta2 = densidade_populacional_2; break;
    default:
        printf("Atributo inválido!\n");
        return 1;
}

// Comparação individual
int venceu1 = (atributo1 == 6) ? (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta1 > valor1_carta2 ? 2 : 0))
                               : (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta1 < valor1_carta2 ? 2 : 0));

int venceu2 = (atributo2 == 6) ? (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta1 > valor2_carta2 ? 2 : 0))
                               : (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta1 < valor2_carta2 ? 2 : 0));

printf("\nResultado do primeiro atributo: %s\n", venceu1 == 1 ? nome_cidade_1 : venceu1 == 2 ? nome_cidade_2 : "Empate");
printf("Resultado do segundo atributo: %s\n", venceu2 == 1 ? nome_cidade_1 : venceu2 == 2 ? nome_cidade_2 : "Empate");

// Soma dos atributos
float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;

printf("\nSoma dos atributos:\n");
printf("Carta 1 (%s): %.2f\n", nome_cidade_1, soma1);
printf("Carta 2 (%s): %.2f\n", nome_cidade_2, soma2);

if (soma1 > soma2)
    printf("\n Carta 1 (%s) venceu a rodada!\n", nome_cidade_1);
else if (soma2 > soma1)
    printf("\n Carta 2 (%s) venceu a rodada!\n", nome_cidade_2);
else
    printf("\n Empate!\n");


    return 0;
}