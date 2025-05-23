#include <stdio.h>

int main() {
    char inicial1;
    int codigo1;
    char nome1[50];
    unsigned int habitantes1;
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
    scanf("%u", &habitantes1);

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
    unsigned int habitantes2;
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
    scanf("%u", &habitantes2);

    printf("Digite a área da cidade 2 em Km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: \n");
    scanf("%d", &pontos2);

//acrescentando novos recuros do desafio aventureiro:
//calculando a densidade populacional:
    float dp1 = habitantes1/area1;
    float dp2 = habitantes2/area2;

//calculando o pib per capta
    float ppc1 = pib1/habitantes1;
    float ppc2 = pib2/habitantes2;

//declarando a variável resultado de cada ítem
    int resultadoPopulacao;
    int resultadoArea;
    int resultadopib;
    int resultadopontos;
    int resultadosuper;

    double SuperPoderA =  (habitantes1 + area1 + pib1 + pontos1 + ppc1 + (1/dp1));
    double SuperPoderB =  (habitantes2 + area2 + pib2 + pontos2 + ppc2 + (1/dp2));

//calculando as comparações

    resultadoPopulacao = habitantes1 > habitantes2;
    resultadoArea = area1 > area2;
    resultadopib = pib1 > pib2;
    resultadopontos = pontos1 > pontos2;

    resultadosuper = (SuperPoderA > SuperPoderB);

    printf("Segue as informações das cartas: \n");
    printf("A população da cidade 1 é maior que da cidade 2? %d\n", resultadoPopulacao);
    printf("A área da cidade 1 é maior que da cidade 2? %d\n", resultadoArea);
    printf("O PIB da cidade 1 é maior que da cidade 2? %d\n", resultadopib);
    printf("A quantidade de pontos turisticos da cidade 1 é maior que da cidade 2? %d\n", resultadopontos);
    printf("A Super Poder da cidade 1 é maior que da cidade 2? %d\n", resultadosuper);

    return 0;


}