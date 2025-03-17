#include <stdio.h>
int main() {

    // variaveis para carta 01(separadas para organização das informacoes de var)
    int pontosTuristicos1;
    char estado1[50], cidade1[50], codigocarta1[50];
    float areakm1, pib1;
    unsigned long int populacao1;

    // variaveis para carta 02
    int pontosTuristicos2;
    char estado2[50], cidade2[50], codigocarta2[50];
    float areakm2, pib2;
    unsigned long int populacao2;
    
    //solicitando as informacoes das cartas para o usuário
    // dividio entre dois tempo, onde o user cadastra todas as informacoes da primeira carta  
    // em seguida as informacoes da segunda carta

    // DADOS PARA CARTA O1

    printf(".-.-.-.SUPER TRUNFO.-.-.-\n");
    printf("--Cadastro das cartas --\n\n");
    printf("Digite as informações da CARTA 01 abaixo:\n");
    printf("Informe uma letra de A-H para representar o Estado A: \n");
    scanf(" %s", estado1);
    printf("Informe o código da carta, com a letra informada anteriormente: \n");
    scanf(" %s", codigocarta1);
    printf("Informe o nome da cidade: \n");
    scanf(" %s", cidade1);
    printf("Informe o numero de habitantes: \n");
    scanf(" %u", &populacao1);
    printf("Informe a area da cidade: \n");
    scanf(" %f", &areakm1);
    printf("Informe o PIB da cidade:\n");
    scanf(" %f", &pib1);

    //ADICAO DE CALCULO DE PIB PER CAPITA DESFIO AVENTUREIRO
    float pibpercapita1 = pib1/populacao1;

    //ADICAO DE CALCULO DE DENSIDADE POPULACIONAL DESAFIO AVENTUREIRO
    float densidade1 = populacao1/areakm1;
    
    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    // fim da secao para adicionar os dados da CARTA 01
    // abaixo as informacoes que serao apresentadas no terminal do usuario.

    printf(".-.-.-.CARTA 01 .-.-.-.\n");
    printf("------------------------\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo da Carta: %s \n", codigocarta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("Populacao: %u \n", populacao1);
    printf("Area da cidade: %2f \n", areakm1);
    printf("PIB per Capita: %2f \n",pibpercapita1);
    printf(" Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("Pontos Turisticos: %d \n\n",pontosTuristicos1);

    // DADOS PARA CARTA 02

    printf("Digite as informações da CARTA 02 abaixo:\n");
    printf("Informe uma letra de A-H para representar o Estado B 2: \n");
    scanf(" %s", estado2);
    printf("Informe o código da carta, com a letra informada anteriormente: \n");
    scanf(" %s", codigocarta2);
    printf("Informe o nome da cidade: \n");
    scanf(" %s", cidade2);
    printf("Informe o numero de habitantes: \n");
    scanf(" %u", &populacao2);
    printf("Informe a area da cidade: \n");
    scanf(" %f", &areakm2);
    printf("Informe o PIB da cidade:\n");
    scanf(" %f", &pib2);

    float pibpercapita2 = pib2/populacao2;
    float densidade2 = populacao2/areakm2;

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // fim da secao para adicionar os dados da CARTA 02
    // abaixo as informacoes que serao apresentadas no terminal do usuario.

    printf(".-.-.-.CARTA 02 .-.-.-.\n");
    printf("------------------------\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigocarta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("Populacao: %u \n", populacao2);
    printf("Area da cidade: %2f \n", areakm2);
    printf("PIB per Capita: %2f \n",pibpercapita2);
    printf(" Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("Pontos Turisticos: %d\n\n\n",pontosTuristicos2);

     //final da area de criação de cartas
    /*Comparação de Cartas- as cartas vencedoras por categorias 
    vao ser apresentadas assim que o usuario colocar todas as informacoes das cartas*/

    printf("****Comparação das Cartas:****\n");
    printf("---------DUELO----------------\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "A é vencedora" : "B é vencedora");
    printf("Area: %s\n", (areakm1 > areakm2) ? "A é vencedora" : "B é vencedora");
    printf("PIB: %s\n", (pib1 > pib2) ? "A é vencedora" : "B é vencedora");
    printf("Pontos Turisticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "A é vencedora" : "B é vencedora");
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "A é vencedora" : "B é vencedora");

    //SUPERPODER 
    // Superpoder vai ser apresentado ao final do jogo para determinar
    // a carta com maior poder entre as apresentadas.
    printf("****Superpoder****\n");

    float SUPERPODER1 = populacao1 + areakm1 + pib1 + pontosTuristicos1 + pibpercapita1 + (1 / densidade1);
    float SUPERPODER2 = populacao2 + areakm2 + pib2 + pontosTuristicos2 + pibpercapita2 + (1 / densidade2);

    printf("A CARTA COM O MAIOR SUPERPODER É:%s\n", (SUPERPODER1 > SUPERPODER2) ? "A" : "B");

    return 0;
}