#include <stdio.h>

int main() {
    char Carta[2];
    char Estado[50];
    char Codigo[5];
    char Cidade[50];
    int População;
    float Área;
    float PIB;
    int Pontos_turísticos;

    printf("Digite qual a sua carta: \n");
    scanf("%s", Carta);

    printf("Estado: \n");
    scanf("%s", Estado);

    printf("Codigo: \n");
    scanf("%s", Codigo);

    printf("Cidade: \n");
    scanf("%s", Cidade);

    printf("População: \n");
    scanf("%d", &População);

    printf("Área (km²): \n");
    scanf("%f", &Área);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turísticos: \n");
    scanf("%d", &Pontos_turísticos);

    return 0;
}