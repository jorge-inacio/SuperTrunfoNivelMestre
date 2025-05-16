#include <stdio.h>
#include <string.h>

int main(){

    int opcao;
    char temp[2];

    // Declaração de variáveis - Atributos das cartas.
    // Carta 1
    char carta1, estado1, codcarta1[4], nomecidade1[31];
    int  populacao1, ptosturisticos1;
    float area1, pib1, densidade1, renda1, superpoder1;

    // Carta 2
    char carta2, estado2, codcarta2[4], nomecidade2[31];
    int populacao2, ptosturisticos2;
    float area2, pib2, densidade2, renda2, superpoder2;

    // Cadastrando a carta 1.
    printf("\n===== JOGO SUPER TRUNFO - CIDADES =====\n");
    printf("\n*** Informe os dados da Carta-1 ***\n");
    printf("Digite o Estado - de A a H: ");
    scanf(" %c",  &estado1);
    printf("Digite o numero da carta: ");   
    scanf(" %c", &carta1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade1);
    printf("Digite a populacao: ");
    scanf("%i", &populacao1);
    printf("Digite a area em Km2: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de R$): ");
    scanf("%f", &pib1);
    printf("Digite numero de pontos turisticos: ");
    scanf("%i", &ptosturisticos1);

    // Calculando a densidade demográfica, a renda per capta e o super poder da cidade1.
    densidade1 = populacao1 / area1;
    renda1 = pib1 * 1000000000 / populacao1;
    superpoder1 = populacao1+ptosturisticos1+area1+pib1;

    // Cadastrando a carta 2.
    printf("\n*** Informe os dados da Carta-2 ***\n");
    printf("Digite o Estado - de A a H: ");
    getchar();
    scanf(" %c",  &estado2);
    printf("Digite o numero da carta: ");
    scanf(" %c", &carta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade2);
    printf("Digite a populacao: ");
    scanf("%i", &populacao2);
    printf("Digite a area em Km2: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de R$): ");
    scanf("%f", &pib2);
    printf("Digite numero de pontos turisticos: ");
    scanf("%i", &ptosturisticos2);

    // Calculando a densidade demográfica, renda per capta e o super poder da cidade2.
    densidade2 = populacao2 / area2;
    renda2 = pib2 * 1000000000 / populacao2;
    superpoder2 = populacao2+ptosturisticos2+area2+pib2;

    // Mostrando as cartas cadastradas.
     // Exibição dos Dados da Carta 1:
     printf("\n*** Mostrando os dados das cartas cadastradas ***\n");
     printf("\nDados da Carta: 1\n");
     codcarta1[0] = '\0';
     temp[0] = estado1;
     temp[1] = '\0';
     strcat(codcarta1, temp);
     temp[0] =  '0';
     temp[1] = '\0';
     strcat(codcarta1, temp);
     temp[0] = carta1;
     temp[1] = '\0';
     strcat(codcarta1, temp);
     printf("Codigo da Carta: %s\n", codcarta1);
     printf("Nome da Cidade: %s\n", nomecidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area da Cidade (Km2): %.2f\n", area1);
     printf("PIB da Cidade (em bilhoes de R$): %.2f\n", pib1);
     printf("Numero de pontos turisticos: %d\n", ptosturisticos1);
     printf("Densidade Demografica: %.2f\n", densidade1);
     printf("Renda Per Capta: %.2f\n", renda1);
     printf("Super Poder da Carta 1: %.2f\n", superpoder1);
  
     // Exibição dos Dados da Carta 2:
     printf("\nDados da Carta: 2\n");
     codcarta2[0] = '\0';
     temp[0] = estado2;
     temp[1] = '\0';
     strcat(codcarta2, temp);
     temp[0] =  '0';
     temp[1] = '\0';
     strcat(codcarta2, temp);
     temp[0] = carta2;
     temp[1] = '\0';
     strcat(codcarta2, temp);
     printf("Codigo da Carta: %s\n", codcarta2);
     printf("Nome da Cidade: %s\n", nomecidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area da Cidade (Km2): %.2f\n", area2);
     printf("PIB da Cidade (em bilhoes de R$): %.2f\n", pib2);
     printf("Numero de pontos turisticos: %d\n", ptosturisticos2);
     printf("Densidade Demografica: %.2f\n", densidade2);
     printf("Renda Per Capta: %.2f\n", renda2);
     printf("Super Poder da Carta 2: %.2f\n", superpoder2);

     // Menu interativo - controle das opções do jogo.
     do {
         printf("\n===== MENU DE COMPARACAO DAS CARTAS =====\n");
         printf("1 - Comparar Populacao\n");
         printf("2 - Comparar Area\n");
         printf("3 - Comparar PIB\n");
         printf("4 - Comparar Densidade Demografica\n");
         printf("5 - Comparar Renda Per Capita\n");
         printf("0 - Sair\n");
         printf("Escolha uma opcao: ");
         scanf("%d", &opcao);
     
         switch (opcao) {
             case 1:
                 printf("\nPopulacao:\n");
                 printf("Carta 1: %d habitantes\n", populacao1);
                 printf("Carta 2: %d habitantes\n", populacao2);
                 printf("Maior populacao: Carta %d\n", (populacao1 > populacao2) ? 1 : 2);
                 break;
     
             case 2:
                 printf("\nArea:\n");
                 printf("Carta 1: %.2f km2\n", area1);
                 printf("Carta 2: %.2f km2\n", area2);
                 printf("Maior area: Carta %d\n", (area1 > area2) ? 1 : 2);
                 break;
     
             case 3:
                 printf("\nPIB:\n");
                 printf("Carta 1: R$ %.2f bilhoes\n", pib1);
                 printf("Carta 2: R$ %.2f bilhoes\n", pib2);
                 printf("Maior PIB: Carta %d\n", (pib1 > pib2) ? 1 : 2);
                 break;
     
             case 4:
                 printf("\nDensidade Demografica:\n");
                 printf("Carta 1: %.2f hab/km²\n", densidade1);
                 printf("Carta 2: %.2f hab/km²\n", densidade2);
                 printf("Menor densidade: Carta %d\n", (densidade1 < densidade2) ? 1 : 2);
                 break;
     
             case 5:
                 printf("\nRenda Per Capita:\n");
                 printf("Carta 1: R$ %.2f mil\n", renda1);
                 printf("Carta 2: R$ %.2f mil\n", renda2);
                 printf("Maior renda per capita: Carta %d\n", (renda1 > renda2) ? 1 : 2);
                 break;
     
             case 0:
                 printf("\nSaindo do Jogo Super Trunfo...\n");
                 break;
     
             default:
                 printf("\nOpcao invalida! Escolha novamente.\n");
         }
     
     } while (opcao != 0); 
 
     return 0;

}