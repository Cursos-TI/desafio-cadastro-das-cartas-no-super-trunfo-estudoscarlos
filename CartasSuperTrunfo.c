int main() {

    //ESTRUTURA DOS DADOS DA PRIMEIRA CARTA//
    char estado_carta1[2];
    char codigo_carta1[4];
    char cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int turismo_carta1;

    //ESTRUTURA DOS DADOS DA SEGUNDA CARTA//
    char estado_carta2[2];
    char codigo_carta2[4];
    char cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int turismo_carta2;

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
    scanf ("%f", area_carta2);

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
    printf ("\n");

      // //LENDO DADOS DA SEGUNDA CARTA//
    printf ("\nINFORMAÇÕES DOS DADOS DA SEGUNDA CARTA: \n");
    printf ("\n");

    printf ("A letra que representa o Estado: %s \n", estado_carta2);
    printf ("O código da Carta: %s \n", codigo_carta2);
    printf ("O Nome da Cidade: %s \n", cidade_carta2);
    printf ("Número da População: %d \n", populacao_carta2);
    printf ("A área é: %f Km² \n" , area_carta2);
    printf ("O Pib é: %f \n", pib_carta2);
    printf ("Quantidades de Pontos Turísticos: %d \n", turismo_carta2);
    printf ("\n");

    

    return 0;
}
