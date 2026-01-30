#include <stdio.h>
int main(){

    char estado;
    char  codigoCarta[3];
    char nomeCidade[15];
    int populacao;
    float area;
    float pib;
    int pontoTuristico;

    char estado2;
    char  codigoCarta2[3];
    char nomeCidade2[15];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;

    printf("Desafio Super Trunfo! \n");

    printf("Este é o desafio Super Trunfo, insira os dados a seguir \n");
    printf("\n");

    printf("Carta 1\n");
    printf("Estado: ");
    scanf("%c",&estado);
    printf("Código da carta: ");
    scanf("%s",codigoCarta);   
    printf("Nome da cidade: ");
    scanf("%s",&nomeCidade);
    printf("População: ");
    scanf("%d",&populacao);
    printf("Area: ");
    scanf("%f",&area);
    printf("Pib: ");
    scanf("%f",&pib);
    printf("Pontos turisticos: ");
    scanf("%d",&pontoTuristico);
    printf("\n");
    printf("------------------------\n");
    printf("\n");

    printf("Carta: 1 \n");
    printf("Estado: %c \n",estado);
    printf("Codigo da carta: %s \n",codigoCarta);
    printf("Nome da cidade: %s \n",nomeCidade);
    printf("População: %d \n",populacao);
    printf("Area: %.2f \n",area);
    printf("Pib: %.2f \n",pib);
    printf("Pontos turisticos: %d \n",pontoTuristico);

    printf("Carta 2\n");
    printf("Estado: ");
    scanf(" %c",&estado2);
    printf("Código da carta: ");
    scanf("%s",codigoCarta2);   
    printf("Nome da cidade: ");
    scanf("%s",&nomeCidade2);
    printf("População: ");
    scanf("%d",&populacao2);
    printf("Area: ");
    scanf("%f",&area2);
    printf("Pib: ");
    scanf("%f",&pib2);
    printf("Pontos turisticos: ");
    scanf("%d",&pontoTuristico2);
    printf("\n");
    printf("------------------------\n");
    printf("\n");

    printf("Carta: 2 \n");
    printf("Estado: %c \n",estado2);
    printf("Codigo da carta: %s \n",codigoCarta2);
    printf("Nome da cidade: %s \n",nomeCidade2);
    printf("População: %d \n",populacao2);
    printf("Area: %.2f \n",area2);
    printf("Pib: %.2f \n",pib2);
    printf("Pontos turisticos: %d \n",pontoTuristico2);

    
    return 0;
}