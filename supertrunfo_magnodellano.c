#include <stdio.h>

int main() {
    char inicial1;
    int codigo1;
    char nome1[50];
    int habitantes1;
    float area1;
    float pib1;
    int pontos1;

    printf("Olá! Em primeiro lugar vamos cadastrar os dados da cidade 1.\n");

    printf("Digite a letra inicial do estado da cidade 1: \n");
    scanf(" %c", &inicial1);

    printf("Digite o código da carta (entre 01 e 04): \n");
    scanf("%d", &codigo1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nome1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &habitantes1);

    printf("Digite a área da cidade 1 em Km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &pontos1);

    printf("\n");
    printf("Agora serão os dados da cidade 2\n");

    char inicial2;
    int codigo2;
    char nome2[50];
    int habitantes2;
    float area2;
    float pib2;
    int pontos2;

    printf("Digite a letra inicial do estado da cidade 2: \n");
    scanf(" %c", &inicial2);

    printf("Digite o código da carta (entre 01 e 04): \n");
    scanf(" %d", &codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &nome2);

    printf("Digite a população da cidade 2: \n");
    scanf("%d", &habitantes2);

    printf("Digite a área da cidade 2 em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontos2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", inicial1);
    printf("Código: %c %d\n", inicial1, codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", habitantes1);
    printf("Área em km²: %f\n", area1);
    printf("PIB da cidade: %f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos1);
    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", inicial2);
    printf("Código: %c %d\n", inicial2, codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", habitantes2);
    printf("Área em km²: %f\n", area2);
    printf("PIB da cidade: %f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);

    return 0;


}