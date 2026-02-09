#include <stdio.h>

/* ---------- protótipos ---------- */
float densidadePopulacao(unsigned long int populacao, float area);
float pibPercapita(float pib, unsigned long int populacao);
float CalcularSuperPoder(unsigned long int populacao,
                         float area,
                         float pib,
                         int pontoTuristico,
                         float densidade,
                         float pibPercapita);

int main(void) {
    char estado, estado2;
    char codigoCarta[4];      /* 3 letras + '\0' */
    char codigoCarta2[4];
    char nomeCidade[30];
    char nomeCidade2[30];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    float densidade1, densidade2;
    float pibPercapita1, pibPercapita2;
    float superPoder1;
    float superPoder2;
    int resultadoPopulacao,resultadoArea,resultadoPontoTuristico,
    resultadoDensidade,resultadoPibPercapita,
    resultadoSuperPoder,resultadoPib;

    /* ----------- Carta 1 ----------- */
    printf("Desafio Super Trunfo!\n");
    printf("Este é o desafio Super Trunfo, insira os dados a seguir\n\n");
    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado);               /* espaço antes de %c */
    printf("Código da carta: ");
    scanf("%3s", codigoCarta);
    printf("Nome da cidade: ");
    scanf("%29s", nomeCidade);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontoTuristico1);
    printf("\n------------------------\n\n");

    densidade1 = densidadePopulacao(populacao1, area1);
    pibPercapita1 = pibPercapita(pib1, populacao1);
    superPoder1 = CalcularSuperPoder(populacao1, area1, pib1,
                                    pontoTuristico1, densidade1,
                                    pibPercapita1);

    printf("Carta: 1\n");
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontoTuristico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPercapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("--------------------------------\n");

    /* ----------- Carta 2 ----------- */
    printf("\nCarta 2\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta: ");
    scanf("%3s", codigoCarta2);
    printf("Nome da cidade: ");
    scanf("%29s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontoTuristico2);
    printf("\n------------------------\n\n");

    densidade2 = densidadePopulacao(populacao2, area2);
    pibPercapita2 = pibPercapita(pib2, populacao2);
    superPoder2 = CalcularSuperPoder(populacao2, area2, pib2,
                                    pontoTuristico2, densidade2,
                                    pibPercapita2);

    resultadoArea = area1 > area2;
    resultadoDensidade = densidade1 > densidade2;
    resultadoPibPercapita = pibPercapita1 > pibPercapita2;
    resultadoPontoTuristico = pontoTuristico1 > pontoTuristico2;
    resultadoPopulacao = populacao1 > populacao2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    printf("Carta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPercapita2);
    printf("Super poder: %.2f \n\n",superPoder2); 

    printf("------------------------------------\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu %d \n",resultadoPopulacao);
    printf("Área: Carta 1 venceu %d \n",resultadoArea);
    printf("Pib: Carta 1 venceu %d \n",resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu %d \n",resultadoPontoTuristico);
    printf("Densidade: Carta 1 venceu %d \n",resultadoDensidade);
    printf("PIB Percapita: Carta 1 venceu %d \n",resultadoPibPercapita);
    printf("Super Poder: Carta 1 venceu %d \n",resultadoSuperPoder);

    printf("--------------------\n");
    printf("Comparação de cartas (Atributo: População)\n\n");
    printf("Carta 1 - %s",nomeCidade);
    printf(": %lu \n",populacao1);
    printf("Carta 2 - %s",nomeCidade2);
    printf(": %lu\n",populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) ",nomeCidade);
        printf(" venceu!");
    }else{
        printf("Resultado: Carta 2 (%s)",nomeCidade2);
        printf(" venceu!");
    }


    return 0;
}

/* ---------- Implementação das funções ---------- */
float densidadePopulacao(unsigned long int populacao, float area) {
    return populacao / area;
}

float pibPercapita(float pib, unsigned long int populacao) {
    return pib / populacao;
}

float CalcularSuperPoder(unsigned long int populacao,
                         float area,
                         float pib,
                         int pontoTuristico,
                         float densidade,
                         float pibPercapita) {
    /* Exemplo de cálculo – ajuste conforme a regra do seu jogo */
    return (float)populacao + area + pib + (float)pontoTuristico
           + (1/densidade) + pibPercapita;
}
