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
    int pontoTuristico1, pontoTuristico2,opcao;
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

    resultadoArea = area1 > area2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPib= pib1 > pib2;
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

    printf("*** Menu ***\n");
    printf("Escolha o atributo a ser comparado:\n");
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
        printf("(Atributo: População)\n");
        printf("Carta 1 - %s",nomeCidade);
        printf(": %lu \n",populacao1);
        printf("Carta 2 - %s",nomeCidade2);
        printf(": %lu\n",populacao2);
        if(populacao1 > populacao2){
            printf("Resultado: Carta 1 (%s) ",nomeCidade);
            printf(" venceu!\n");
        }else if(populacao1 < populacao2){
            printf("Resultado: Carta 2 (%s)",nomeCidade2);
            printf(" venceu!\n");
        }else{
            printf("Empatou\n");
        }
        break;
    case 2:
        printf("(Atributo: Área)\n");
        printf("Carta 1 - %s ",nomeCidade);
        printf(": %f\n",area1);
        printf("Carta 2 - %s",nomeCidade2);
        printf(": %f\n",area2);
        if(area1 > area2){
            printf("Carta 1 (%s) ",nomeCidade);
            printf("venceu!\n");
        }else if(area1 < area2){
            printf("Carta 2 (%s) ",nomeCidade2);
            printf("venceu!\n");
        }else{
            printf("empatou!");
        }
        break; 
    case 3:
        printf("(Atributo: PIB)\n");
        printf("Carta 1 - %s ",nomeCidade);
        printf(": %f\n",pib1);
        printf("Carta 2 - %s ",nomeCidade2);
        printf(": %f\n",pib2);
        if(pib1 > pib2){
            printf("Carta 1 (%s) ",nomeCidade);
            printf("venceu!\n");
        }else if(pib1 < pib2){
            printf("Carta 2 (%s) ",nomeCidade2);
            printf("venceu\n");
        }else{
            printf("empatou!\n");
        }
        break;
    case 4:
        printf("(Atributo: Pontos turísticos)\n");
        printf("Carta 1 - %s",nomeCidade);
        printf(": %d\n",pontoTuristico1);
        printf("Carta 2 - %s",nomeCidade2);
        printf(": %d\n",pontoTuristico2);
        if(pontoTuristico1 > pontoTuristico2){
            printf("Carta 1 (%s)",nomeCidade);
            printf("venceu!\n");
        }else if(pontoTuristico1 < pontoTuristico2){
            printf("Carta 2 (%s)",nomeCidade2);
            printf("venceu!\n");
        }else{
            printf("empatou!");
        }
        break;
    case 5:
        printf("(Atributo: Densidade)\n");
        printf("Carta 1 - %s",nomeCidade);
        printf(": %f\n",densidade1);
        printf("Carta 2 - %s",nomeCidade2);
        printf(": %f\n",densidade2);
        if(densidade1 > densidade2){
            printf("Carta 1 (%s)",nomeCidade);
            printf("venceu!\n");
        }else if(densidade1 < densidade2){
            printf("Carta 2 (%s)",nomeCidade2);
            printf("venceu!\n");
        }else{
            printf("empatou!\n");
        }
        break;
    case 6:
        printf("(Atributo: Super poder)\n");
        printf("Carta 1 - %s",nomeCidade);
        printf(": %f\n",superPoder1);
        printf("Carta 2 - %s",nomeCidade2);
        printf(": %f\n",superPoder2);
        if(superPoder1 > superPoder2){
            printf("Carta 1 (%s)",nomeCidade);
            printf("venceu!\n");
        }else if(superPoder1 < superPoder2){
            printf("Carta 2 (%s) ",nomeCidade2);
            printf("venceu!\n");
        }else{
            printf("empatou!\n");
        }
        break;    
    
    default:
        break;
    }

    /*
    printf("------------------------------------\n");
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu %d \n",resultadoPopulacao);
    printf("Área: Carta 1 venceu %d \n",resultadoArea);
    printf("Pib: Carta 1 venceu %d \n",resultadoPib);
    printf("Pontos Turísticos: Carta 1 venceu %d \n",resultadoPontoTuristico);
    printf("Densidade: Carta 1 venceu %d \n",resultadoDensidade);
    printf("PIB Percapita: Carta 1 venceu %d \n",resultadoPibPercapita);
    printf("Super Poder: Carta 1 venceu %d \n",resultadoSuperPoder);
    */

    //Comparação entre as cartas
    /*
    printf("--------------------\n");
    printf("Comparação de cartas\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s",nomeCidade);
    printf(": %lu \n",populacao1);
    printf("Carta 2 - %s",nomeCidade2);
    printf(": %lu\n",populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) ",nomeCidade);
        printf(" venceu!\n");
    }else{
        printf("Resultado: Carta 2 (%s)",nomeCidade2);
        printf(" venceu!\n");
    }

    printf("---------------------\n");
    printf("(Atributo: Área)\n");
    printf("Carta 1 - %s ",nomeCidade);
    printf(":%.2f\n",area1);
    printf("Carta 2 -%s ",nomeCidade2);
    printf(":%.2f\n",area2);
    if(area1 > area2){
        printf("Resultado: Carta 1 %s",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Resultado: Carta 2 %s",nomeCidade2);
        printf("venceu!\n");
    }

    printf("--------------------\n");
    printf("(Atributo: População)\n");
    printf("Carta 1 - %s : ",nomeCidade);
    printf("%lu\n",populacao1);
    printf("Carta 2 - %s : ",nomeCidade2);
    printf("%lu\n",populacao2);

    if(populacao1 > populacao2){
        printf("Carta 1 (%s) ",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Carta 2 (%s) ",nomeCidade2);
        printf("venceu!\n");
    }

    printf("----------------------\n");
    printf("(Atributo: Pib)\n");
    printf("Carta 1 - %s:",nomeCidade);
    printf("%.2f \n",pib1);
    printf("Carta 2 - %s: ",nomeCidade2);
    printf("%.2f \n",pib2);

    if(pib1 > pib2){
        printf("Carta 1 (%s)",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Carta 2 (%s)",nomeCidade2);
        printf("venceu!\n");
    }
    printf("----------------------\n");
    printf("(Atributo: Pontos turísticos)\n");
    printf("Carta 1 - %s:",nomeCidade);
    printf("%d \n",pontoTuristico1);
    printf("Carta 2 - %s: ",nomeCidade2);
    printf("%d \n",pontoTuristico2);

    if(pontoTuristico1 > pontoTuristico2){
        printf("Carta 1 (%s)",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Carta 2 (%s)",nomeCidade2);
        printf("venceu!\n");
    } 
    
    printf("----------------------\n");
    printf("(Atributo: Densidade)\n");
    printf("Carta 1 - %s:",nomeCidade);
    printf("%.2f \n",densidade1);
    printf("Carta 2 - %s: ",nomeCidade2);
    printf("%.2f \n",densidade2);

    if(densidade1 < densidade2){
        printf("Carta 1 (%s) ",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Carta 2 (%s) ",nomeCidade2);
        printf("venceu!\n");
    } 
    
    printf("---------------------\n");
    printf("(Atributo: Pib per Capita)\n");
    printf("Carta 1 - %s ",nomeCidade);
    printf(":%.2f\n",pibPercapita1);
    printf("Carta 2 -%s ",nomeCidade2);
    printf(":%.2f\n",pibPercapita2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) ",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Resultado: Carta 2 (%s) ",nomeCidade2);
        printf("venceu!\n");
    } 
    
    printf("---------------------\n");
    printf("(Atributo: Super Poder)\n");
    printf("Carta 1 - %s ",nomeCidade);
    printf(":%.2f\n",superPoder1);
    printf("Carta 2 -%s ",nomeCidade2);
    printf(":%.2f\n",superPoder2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) ",nomeCidade);
        printf("venceu!\n");
    }else{
        printf("Resultado: Carta 2 (%s) ",nomeCidade2);
        printf("venceu!\n");
    }
    */

    return 0;
}

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
