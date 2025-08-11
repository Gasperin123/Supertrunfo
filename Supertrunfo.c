#include <stdio.h>

int main() {
    char estado1, estado2;
    char cod_carta1[3], cod_carta2[3];
    char cidade1[25], cidade2[25];
    int pop1, pop2;
    float area1, area2;
    float PIB1, PIB2;
    int num_pt_tur1, num_pt_tur2;

    printf("Insira os dados da primeira carta: \n");
    printf("\nEstado: ");
    scanf(" %c", &estado1);
    printf("\nCodigo da carta: ");
    scanf(" %s", cod_carta1);
    printf ("\nCidade: ");
    scanf(" %s", cidade1);
    printf("\npopulacao: ");
    scanf("%d", &pop1);
    printf("\nArea do municipio: ");
    scanf("%f", &area1);
    printf ("\nPIB do municipio: ");
    scanf("%f", &PIB1);
    printf("\nNumero de pontos turisticos do municipio: ");
    scanf("%d", &num_pt_tur1);

    printf("Insira os dados da segundaa carta: \n");
    printf("\nEstado: ");
    scanf(" %c", &estado2);
    printf("\nCodigo da carta: ");
    scanf(" %s", cod_carta2);
    printf ("\nCidade: ");
    scanf(" %s", cidade2);
    printf("\npopulacao: ");
    scanf("%d", &pop2);
    printf("\nArea do municipio: ");
    scanf("%f", &area2);
    printf("\nPIB do municipio: ");
    scanf("%f", &PIB2);
    printf("\nNumero de pontos turísticos do município: ");
    scanf("%d", &num_pt_tur2);

    printf("\n\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n\n", estado1, cod_carta1, cidade1, pop1, area1, PIB1, num_pt_tur1);
    
    printf("\n\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %d\n\n", estado2, cod_carta2, cidade2, pop2, area2, PIB2, num_pt_tur2);
    return 0;
}
