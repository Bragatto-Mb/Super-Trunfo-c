#include <stdio.h>

int main() {

    //Carta 1//
    char Carta1[2];
    char Estado1[50];
    char Codigo1[5];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_turísticos1;
    float Densidade1; 
    float Pib_Per_Capta1;

    //Carta 2//
    char Carta2[2];
    char Estado2[50];
    char Codigo2[5];
    char Cidade2[50];
    int População2;
    float Area2;
    float PIB2;
    int Pontos_turísticos2;
    float Densidade2; 
    float Pib_Per_Capita2;




    printf("Digite qual a sua carta 1: \n");
    scanf("%s", Carta1);

    printf("Estado 1: \n");
    scanf("%s", Estado1);

    printf("Codigo 1: \n");
    scanf("%s", Codigo1);

    printf("Cidade 1: \n");
    scanf("%s", Cidade1);

    printf("População 1: \n");
    scanf("%d", &Populacao1);

    printf("Área (km²) 1: \n");
    scanf("%.2f", &Area1);

    printf("PIB 1: \n");
    scanf("%.2f", &PIB1);

    printf("Pontos Turísticos 1: \n");
    scanf("%d", &Pontos_turísticos1);

    // Esse será o Desafio NIVEL AVENTUREIRO, cálculo 1// 

    Densidade1 = Populacao1 / Area1; 

    Pib_Per_Capita1 = PIB1 / Populacao1; 

    //ENTRADA DA CARTA 2//


    printf("Digite qual a sua carta 2: \n");
    scanf("%s", Carta2);

    printf("Estado 2: \n");
    scanf("%s", Estado2);

    printf("Codigo 2: \n");
    scanf("%s", Codigo2);

    printf("Cidade 1: \n");
    scanf("%s", Cidade2);

    printf("População 2: \n");
    scanf("%d", &Populacao2);

    printf("Área (km²) 2: \n");
    scanf("%.2f", &Area2);

    printf("PIB 2: \n");
    scanf("%.2f", &PIB2);

    printf("Pontos Turísticos 2: \n");
    scanf("%d", &Pontos_turísticos2);

    // Esse será o Desafio NIVEL AVENTUREIRO, cálculo 2// 

    Densidade1 = Populacao2 / Area2; 

    Pib_Per_Capita1 = PIB2 / Populacao2;
    
    //saída//

    printf("\n--- Dados da Carta 1 ---\n");

    printf("Carta: %s\n", Carta1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Carta: %s\n", Carta2);
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turisticos: %d\n", Pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);








    return 0;
}