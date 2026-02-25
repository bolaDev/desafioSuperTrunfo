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
    int pontoTuristico1, pontoTuristico2,opcao,opcao2,opcao3;
    float densidade1, densidade2;
    float pibPercapita1, pibPercapita2;
    float superPoder1;
    float superPoder2;
    int resultado1,resultado2,resultado3;

    /* ----------- Carta 1 ----------- */
    printf("Desafio Super Trunfo!\n");
    printf("Este é o desafio Super Trunfo, insira os dados a seguir\n\n");
    printf("Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado);               
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

    //Menu para escolha do 1° atributo
    printf("*** Menu ***\n");
    printf("Escolha o 1° atributo a ser comparado:\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. Pib \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade \n");
    printf("6. Super poder\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Você escolheu o atributo: População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo: Área\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo: PIB\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo: Pontos turísticos\n");
        resultado1 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
        break;
    case 5:

        printf("Você escolheu o atributo: Densidade\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:
        printf("Você escolheu o atributo: Super poder\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
        break;    
    default:
        break;
    }

    //Menu para escolha do 2° atributo
    printf("Escolha o 2° atributo a ser comparado:\n");
    printf("Você não deve escolher o mesmo atributo! \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. Pib \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade \n");
    printf("6. Super poder\n");
    scanf("%d",&opcao2);
    // Lógica para não permitir que seja escolhido o mesmo atributo
    if(opcao2 == opcao){
        printf("Você escolheu o mesmo atributo!");
    }else
    {
        switch (opcao2)
    {
    case 1:
        printf("Você escolheu o atributo: População\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu o atributo: Área\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    case 3:
        printf("Você escolheu o atributo: PIB\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    case 4:
        printf("Você escolheu o atributo: Pontos turísticos\n");
        resultado2 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
        break;
    case 5:
        printf("Você escolheu o atributo: Densidade\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;
    case 6:

        printf("Você escolheu o atributo: Super poder\n");
        resultado2 = superPoder1 > superPoder2 ? 1 : 0;
        break;    
    default:
        break;
    }

    printf("Escolha o 3° atributo a ser comparado:\n");
    printf("Você não deve escolher o mesmo atributo das escolhas anteriores! \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. Pib \n");
    printf("4. Pontos turísticos \n");
    printf("5. Densidade \n");
    printf("6. Super poder\n");
    scanf("%d",&opcao3);
    // Lógica para não permitir que seja escolhido o mesmo atributo
        if((opcao2 == opcao3)||(opcao3 == opcao)){
        printf("Você escolheu o mesmo atributo!");
    } else {
        switch (opcao3) {
            case 1:
                printf("Você escolheu o atributo: População\n");
                resultado3 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu o atributo: Área\n");
                resultado3 = area1 > area2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu o atributo: PIB\n");
                resultado3 = pib1 > pib2 ? 1 : 0;
                break;
            case 4:
                printf("Você escolheu o atributo: Pontos turísticos\n");
                resultado3 = pontoTuristico1 > pontoTuristico2 ? 1 : 0;
                break;
            case 5:
                printf("Você escolheu o atributo: Densidade\n");
                resultado3 = densidade1 < densidade2 ? 1 : 0;
                break;
            case 6:
                printf("Você escolheu o atributo: Super poder\n");
                resultado3 = superPoder1 > superPoder2 ? 1 : 0;
                break;
            default:
                break;
        } // fecha switch opcao3

        if(resultado1 && resultado2 && resultado3){
            printf("Carta 1 venceu!");
        }else if ((resultado1 && resultado2) && resultado3 == 0){
            printf("Carta 1 venceu");
        }else if (resultado1 == 0 && (resultado2 && resultado3)){
            printf("Carta 1 venceu");
        }else if (((resultado1) && resultado2 == 0 && (resultado3))){
            printf("Carta 1 Venceu!");
        }  else {
            printf("Carta 2 venceu!");
        }

    } // fecha else do opcao3

    } // fecha else do opcao2

    return 0;
} // fecha main



/* ---------- Implementação das funções ---------- */
float densidadePopulacao(unsigned long int populacao, float area) {
    return  (populacao / area);
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
    
    return (float)populacao + area + pib + (float)pontoTuristico
           + (1/densidade) + pibPercapita;
}

