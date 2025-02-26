#include <stdio.h>

int main(){

    //ESTRUTURA DOS DADOS DA PRIMEIRA CARTA//
    char estado_carta1[2];
    char codigo_carta1[4];
    char cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int turismo_carta1;
    float densidadePopulacional_carta1;
    float pibPercapita_carta1;

    //ESTRUTURA DOS DADOS DA SEGUNDA CARTA//
    char estado_carta2[2];
    char codigo_carta2[4];
    char cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int turismo_carta2;
    float densidadePopulacional_carta2;
    float pibpercapita_carta2;

    //ENTRADA DOS DADOS DA PRIMEIRA CARTA//
    printf ("\nINSIRA OS DADOS DA PRIMEIRA CARTA: \n");
    printf ("\n");

    printf ("Digite a Letra que irá representar o Estado (A - H): \n");
    scanf ("%s" , &estado_carta1);

    printf ("Digite o Código da carta (ex: AO1): \n");
    scanf ("%s", &codigo_carta1);

    printf ("Digite o nome da Cidade: \n");
    scanf ("%s", &cidade_carta1);

    printf ("Digite a População: \n");
    scanf ("%d" , &populacao_carta1);

    printf ("Digite a Área (em Km²): \n");
    scanf ("%f" , &area_carta1);

    printf ("Digite o Pib: \n");
    scanf ("%f" , &pib_carta1);

    printf ("Digite quantidades de Pontos Turisticos: \n");
    scanf ("%d" , &turismo_carta1);

    printf ("\n");

    //ENTRADA DOS DADOS DA SEGUNDA CARTA//
    printf ("\nINSIRA OS DADOS DA SEGUNDA CARTA: \n");
    printf ("\n");

    printf ("Digite a letra que irá representar o Estado (Ex: A - H): \n");
    scanf ("%s", &estado_carta2);

    printf ("Digite o Código da carta (ex: AO1): \n");
    scanf ("%s", &codigo_carta2);

    printf ("Digite o nome da Cidade: \n");
    scanf ("%s", &cidade_carta2);

    printf ("Digite a População: \n");
    scanf ("%d", &populacao_carta2);

    printf ("Digite a Área (em Km²): \n");
    scanf ("%f", &area_carta2);

    printf ("Digite o Pib: \n");
    scanf ("%f", &pib_carta2);

    printf ("Digite quantidades de Pontos Turisticos: \n");
    scanf ("%d", &turismo_carta2);
    
    printf ("\n");
    
    //LENDO DADOS DA PRIMEIRA CARTA//
    printf ("\nINFORMAÇÕES DOS DADOS DA PRIMEIRA CARTA: \n");
    printf ("\n");

    printf ("A letra que representa o Estado: %s \n", estado_carta1);
    printf ("O código da Carta: %s \n", codigo_carta1);
    printf ("O Nome da Cidade: %s \n", cidade_carta1);
    printf ("Número da População: %d \n", populacao_carta1);
    printf ("A área é: %f Km² \n" , area_carta1);
    printf ("O Pib é: %f \n", pib_carta1);
    printf ("Quantidades de Pontos Turísticos: %d \n", turismo_carta1);
    densidadePopulacional_carta1 = populacao_carta1 / area_carta1;
    printf ("Densidade Populacional é: %f \n", densidadePopulacional_carta1);
    pibPercapita_carta1 = pib_carta1 / populacao_carta1;
    printf ("Pib per capita é: %f", pibPercapita_carta1);
    
    printf ("\n");

    //LENDO DADOS DA SEGUNDA CARTA//
    printf ("\nINFORMAÇÕES DOS DADOS DA SEGUNDA CARTA: \n");
    printf ("\n");

    printf ("A letra que representa o Estado: %s \n", estado_carta2);
    printf ("O código da Carta: %s \n", codigo_carta2);
    printf ("O Nome da Cidade: %s \n", cidade_carta2);
    printf ("Número da População: %d \n", populacao_carta2);
    printf ("A área é: %f Km² \n" , area_carta2);
    printf ("O Pib é: %f \n", pib_carta2);
    printf ("Quantidades de Pontos Turísticos: %d \n", turismo_carta2);
    densidadePopulacional_carta2 = populacao_carta2 / area_carta2;
    printf ("A Densidade Populacional é: %f \n", densidadePopulacional_carta2);
    pibpercapita_carta2 = pib_carta2 / populacao_carta2;
    printf ("O Pib per capita é: %f \n", pibpercapita_carta2);
    
    printf ("\n");

    //COMPARANDO ATRIBUTO POPULAÇÃO CARTA 1 E CARTA 2// 

    if (populacao_carta1 > populacao_carta2) {
        printf ("\nCARTA VENCEDORA ATRIBUTO POPULAÇÃO:\nPOPULAÇÃO=%d \nCARTA 1 Vencedora! \n", populacao_carta1);
        printf ("\n");
    }
    else {
        printf ("\nCARTA VENCEDORA ATRIBUTO POPULAÇÃO:\nPOPULAÇÃO=%d \nCARTA 2 Vencedora! \n", populacao_carta2);
        printf ("\n");
    }

    //COMPARANDO ATRIBUTO ÁREA CARTA 1 E CARTA 2//
    if (area_carta1 > area_carta2) {
        printf ("\nCARTA VENCEDORA ATRIBUTO ÁREA:\nÁREA=%f Km² \nCARTA 1 Vencedora! \n", area_carta1); 
        printf ("\n");
    }
    else {
        printf ("\nCARTA VENCEDORA ATRIBUTO ÁREA:\nÁREA=%f Km² \nCARTA 2 Vencedora! \n", area_carta2);
        printf ("\n");
    }

    //COMPARANDO ATRIBUTO PIB CARTA 1 E CARTA 2//
    if (pib_carta1 > pib_carta2) {
        printf ("\nCARTA VENCEDORA ATRIBUTO PIB:\nPIB=%f \nCARTA 1 Vencedora! \n", pib_carta1);
        printf ("\n");
    }
    else {
        printf ("\nCARTA VENCEDORA ATRIBUTO PIB:\nPIB=%f \nCARTA 2 Vencedora! \n", pib_carta2);
        printf ("\n");    }

    //COMPARANDO PONTOS TURÍSTICOS CARTAS 1 E CARTAS 2//
    if (turismo_carta1 > turismo_carta2) {
        printf ("CARTA VENCEDORA ATRIBUTO PONTOS TURÍSTICOS:\nTURISMO=%d \nCARTA 1 Vencedora! \n", populacao_carta1);
        printf ("\n");
    }
    else {
        printf ("CARTA VENCEDORA ATRIBUTO PONTOS TURÍSTICOS:\nTURISMO=%d \nCARTA 2 Vencedora! \n", populacao_carta2);
        printf ("\n");
    }


    return 0;

}