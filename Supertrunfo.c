#include <stdio.h>

int main() {
    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];
    char cidade1[25], cidade2[25];
    int pop1, pop2;
    float area1, area2;
    float PIB1, PIB2;
    int num_pt_tur1, num_pt_tur2;
    float densidade1, densidade2;
    float PIB_PC1, PIB_PC2;
    float SuperPoder1, SuperPoder2;

    printf("Insira os dados da primeira carta: \n");
    printf("\nEstado: ");
    scanf(" %c", &estado1);
    printf("\nCodigo da carta: ");
    scanf("%s", cod_carta1);
    printf ("\nCidade: ");
    scanf("%s", cidade1);
    printf("\npopulacao: ");
    scanf("%d", &pop1);
    printf("\nArea do municipio: ");
    scanf("%f", &area1);
    printf ("\nPIB do municipio: ");
    scanf("%f", &PIB1);
    printf("\nNumero de pontos turisticos do municipio: ");
    scanf("%d", &num_pt_tur1);
    densidade1 = pop1/area1;
    PIB_PC1= PIB1/pop1;
    SuperPoder1= pop1+area1+PIB1+num_pt_tur1+(1/densidade1)+PIB_PC1;

    printf("Insira os dados da segundaa carta: \n");
    printf("\nEstado: ");
    scanf(" %c", &estado2);
    printf("\nCodigo da carta: ");
    scanf("%s", cod_carta2);
    printf ("\nCidade: ");
    scanf("%s", cidade2);
    printf("\npopulacao: ");
    scanf("%d", &pop2);
    printf("\nArea do municipio: ");
    scanf("%f", &area2);
    printf("\nPIB do municipio: ");
    scanf("%f", &PIB2);
    printf("\nNumero de pontos turísticos do município: ");
    scanf("%d", &num_pt_tur2);
    densidade2 = pop2/area2;
    PIB_PC2= PIB2/pop2;
    SuperPoder2= pop2+area2+PIB2+num_pt_tur2+(1/densidade2)+PIB_PC2;

    printf("\n\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f KM2\nPIB: %f bilhoes de reais\nNumero de pontos turisticos: %d\nDensidade populacional: %f hab/KM2\nPIB per capita:%f reais\n\n", estado1, cod_carta1, cidade1, pop1, area1, PIB1, num_pt_tur1, densidade1, PIB_PC1);
    
    printf("\n\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f KM2\nPIB: %f bilhoes de reais\nNumero de pontos turisticos: %d\nDensidade populacional: %f hab/KM2\nPIB per capita:%f reais\n\n", estado2, cod_carta2, cidade2, pop2, area2, PIB2, num_pt_tur2, densidade2, PIB_PC2);
    
    printf("\n\nCompracao de cartas: ");
    printf("\nPopulacao: Carta %d venceu", pop1>pop2);
    printf("\nArea: Carta %d venceu", area1>area2);
    printf("\nPIB: Carta %d venceu", PIB1>PIB2);
    printf("\nNumero de pontos turisticos: Carta %d venceu", num_pt_tur1>num_pt_tur2);
    printf("\nDensidade: Carta %d venceu", densidade1<densidade2);
    printf("\nPIB per capita: Carta %d venceu", PIB_PC1>PIB_PC2);
    printf("\nSuper Poder: Carta %d venceu", SuperPoder1>SuperPoder2);

    return 0;
}
