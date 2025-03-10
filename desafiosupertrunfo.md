#include<stdio.h>

// Desafio Super trunfo

int main(){

    // Variáveis
    
    char estado1, estado2;
    char codigo1[4], codigo2[4]; 
    char cidade1[20], cidade2[20];
    int população1, população2; 
    float area1, area2;
    float PIB1, PIB2;
    int pontosturisticos1[4], pontosturisticos2[4];     
    float densidade = (float)população1 / area1;
    float densidade2 = (float)população2 / area2;
    float pibpercapita = (float)PIB1 / area1;
    float pibpercapita2 = (float)PIB2 / area2;

    float superpoder1 = população1 + area1 + pibpercapita + densidade + PIB1;
    float superpoder2 = população2 + area2 + pibpercapita2 + densidade2 + PIB2;
    
    //Dados comparação
    
    int resultadoPop = população1 >= população2;
    float resultadoArea = area1 >= area2;
    float resultadoPIB = PIB1 >= PIB2;
    int resultadosPontosT = pontosturisticos1 >= pontosturisticos2;
    float resultadoDens = densidade >= densidade2;
    float resultadoPIBper = pibpercapita >= pibpercapita2;
    unsigned superpodertotal = superpoder1 >= superpoder2;

    // Dados carta 1

    printf("Informe o código do Estado 1: \n");
    scanf("%c", &estado1);
    
    printf("Informe o nome da cidade 1: \n");
    scanf("%s", &cidade1);
    
    printf("Informe o código da carta 1: \n");
    scanf("%s", &codigo1);
    
    
    printf("Informe a área urbana da cidade 1: \n");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade 1: \n");
    scanf("%f", &PIB1);

    
    printf("Informe a população da cidade 1: \n");
    scanf("%d", &população1);

    
    printf("Informe quantos pontos turísticos tem a cidade 1: \n");
    scanf("%d", &pontosturisticos1);

    
//Saída de dados cidade 1
    
    printf("-----Carta 1-----\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Área urbana: %f km²\n", area1);
    printf("População: %d\n", população1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    pibpercapita = PIB1 / area1;
    printf("PIB per capita: %f\n", pibpercapita);

    densidade = (float) população1 / area1;
    printf("A densidade populacional da sua cidade é: %f\n", densidade);

    //Dados carta 2

    printf("Informe o código do Estado 2: \n");
    scanf(" %c", &estado2);

    printf("Informe o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Informe o código da carta 2: \n");
    scanf(" %s", &codigo2);

    printf("Informe o PIB da cidade 2: \n");
    scanf("%f", &PIB2);

    printf("Informe a área urbana da cidade 2: \n");
    scanf("%f", &area2);

    printf("Informe a população da cidade 2: \n");
    scanf("%d", &população2);

    printf("Informe quantos pontos turísticos tem a cidade 2: \n");
    scanf("%d", &pontosturisticos2);


    //Saída de dados cidade 2
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Área urbana: %.2f km²\n", area2);
    printf("População: %d\n", população2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    pibpercapita2 = PIB2 / area2;
    printf("PIB per capita: %f\n", pibpercapita2);

    densidade2 = (float) população2 / area2;
    printf("A densidade populacional da sua cidade é: %f\n", densidade2);
   

    //Saida de comparações

    printf("---Comparação entre cartas---\n");
    printf("População: Carta 1 venceu? %d1\n", resultadoPop);
    printf("Área: Carta 2 venceu? %d\n", resultadoArea);
    //printf("Pontos Turísticos: Carta 1 venceu? %d\n", resultadosPontosT);
    printf("Densidade Populacional: Carta 2 venceu? %d\n", resultadoDens);
    printf("PIB per capita: Carta 1 venceu? %d\n", resultadoPIBper);
    printf("Super poder: Carta 2 venceu? %u\n",superpodertotal);

    

    return 0;

     /*
    printf(%formato1 %formato2 %formato3, variavel1 variavel2 variavel3)

    %d: Imprime um inteiro no formato decimal.
    %i: Equivale a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante em notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres


    */
    }
