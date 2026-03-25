#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    
    // Área para indexação das variáveis

    // Variáveis para a carta 1
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populaçao;
    int pontos; 
    float area;
    float pib;
    float densidade;
    float pibpcapita;
    float superpodercarta1;
    int opcao;

    // Variáveis para a carta 2
    char estado2[50];
    char codigo2[50];
    char cidade2[50];
    int populaçao2;
    int pontos2; 
    float area2;
    float pib2;
    float densidade2;
    float pibpcapita2;
    float superpodercarta2;
   

    // Área para indexação das variáveis de exibição
    
    // Informações da carta 1
    printf("digite as informações da carta 1 \n\n");

    printf("Digite o estado:");
    scanf ("%s", estado);

    printf("Digite o código da cidade:");
    scanf("%s", codigo);

    printf("Digite o nome da cidade:");
    scanf("%s", cidade);

    printf("Digite a população:");
    scanf("%d", &populaçao);

    printf("Digite a área em km²:");
    scanf("%f", &area);

    printf("Digite o PIB:");
    scanf("%f", &pib);
    
    printf("Digite os Pontos Turísticos:");
    scanf("%d", &pontos);

    // Informações da carta 2
    printf("\ndigite as informações da carta 2 \n\n");

    printf("Digite o estado:");
    scanf ("%s", estado2);

    printf("Digite o código da cidade:");
    scanf("%s", codigo2);

    printf("Digite o  nome da cidade:");
    scanf("%s", cidade2); 

    printf("Digite a população:");
    scanf("%d", &populaçao2);

    printf("Digite a área em km²:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    printf("Digite os Pontos Turísticos:");
    scanf("%d", &pontos2);

     // Cálculo do PIB per capita e densidade populacional para a carta 1 e 2

    pibpcapita = (pib * 1000000000) / (float)(populaçao); 
    densidade = (float)  (populaçao) /  (area);  
    pibpcapita2 = (pib2 * 1000000000) / (float)(populaçao2);
    densidade2 = (float) (populaçao2) / (area2);
    
    
    // Cálculo do super poder da carta 1 e carta 2
    float resultadosuperpodercarta1 = pontos + pib / pibpcapita + densidade + populaçao + area;
    float resultadosuperpodercarta2 = pontos2 + pib2 / pibpcapita2 + densidade2 + populaçao2 + area2;

    // Área para exibição das cartas

    // Exibição da carta 1 
    printf("\n\nCarta 1:\n");

    printf("Estado:%s \n", estado);
    printf("Código:%s \n", codigo);
    printf("Cidade:%s \n", cidade);
    printf("População:%d \n", populaçao);
    printf("Área:%.2f km² \n", area);
    printf("PIB:%.2f Bilhões de Reais \n", pib);
    printf("Pontos Turísticos:%d \n", pontos);
    printf("Densidade Populacional:%.2f hab/km² \n",densidade);
    printf("Pib per capita:%.2f reais \n", pibpcapita);
    printf("Super Poder da Carta 1: %.2f \n\n", resultadosuperpodercarta1);
    
    // Exibição da carta 2 
    printf("Carta 2:\n");

    printf("Estado:%s \n", estado2);
    printf("Código:%s \n", codigo2);
    printf("Cidade:%s \n", cidade2);
    printf("População:%d \n", populaçao2);
    printf("Área:%.2f km² \n", area2);
    printf("PIB:%.2f Bilhões de Reais \n", pib2);
    printf("Pontos Turísticos:%d \n", pontos2);
    printf("Densidade Populacional:%.2f hab/km² \n", densidade2);
    printf("Pib per capita:%.2f reais \n", pibpcapita2);
    printf("Super Poder da Carta 2: %.2f \n", resultadosuperpodercarta2);

    // Área para indexar o menu

    printf("Escolha o Atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Pib\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade\n");
    printf("6 - Pib per capita\n");
    printf("7 - Super poderes\n");
    scanf("%d", &opcao);
    

    // Comparação das cartas

    printf("\nComparação das Cartas\n\n");

    switch(opcao)
{
    case 1: printf("População:\n");
            printf("%s: %d\n", cidade, populaçao);
            printf("%s: %d\n", cidade2, populaçao2);
    if (populaçao > populaçao2){
        printf("Carta 1 Venceu (1)\n");
    } else if (populaçao < populaçao2){
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;

    case 2: printf("Área:\n");
            printf("%s: %.2f\n", cidade, area);
            printf("%s: %.2f\n", cidade2, area2);
    if (area > area2){
        printf("Carta 1 Venceu (1)\n");
    } else if (area < area2){
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;

    case 3: printf("Pib:\n");
            printf("%s: %.2f\n", cidade, pib);
            printf("%s: %.2f\n", cidade2, pib2);
    if (pib > pib2){
        printf("Carta 1 Venceu (1)\n");
    } else if (pib < pib2) {
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;

    case 4: printf("Pontos Turisticos:\n");
            printf("%s: %d\n", cidade, pontos2);
            printf("%s: %d\n", cidade2, pontos2);
    if (pontos > pontos2){
        printf("Carta 1 Venceu (1)\n");
    } else if (pontos < pontos2){
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;

    case 5: printf("Densidade:\n");
            printf("%s: %.2f\n", cidade, densidade);
            printf("%s: %.2f\n", cidade2, densidade2);
    if (densidade < densidade2){
        printf("Carta 1 Venceu (1)\n");
    } else if (densidade > densidade2) {
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;

    case 6: printf("Pib per capita:\n");
            printf("%s: %.2f\n", cidade, pibpcapita);
            printf("%s: %.2f\n", cidade2, pibpcapita2);
    if (pibpcapita > pibpcapita2){
        printf("Carta 1 Venceu (1)\n");
    } else if (pibpcapita < pibpcapita2){
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;

    case 7: printf("Super Poderes:\n");
            printf("%s: %.2f\n", cidade, resultadosuperpodercarta1);
            printf("%s: %.2f\n", cidade2, resultadosuperpodercarta2);
    if (resultadosuperpodercarta1 > resultadosuperpodercarta2){
        printf("Carta 1 Venceu (1)\n");
    } else if (resultadosuperpodercarta1 < resultadosuperpodercarta2){
        printf("Carta 2 Venceu (0)\n");
    } else {
        printf("Empate\n");
    }
    break;
}
    return 0;
}
