#include <stdio.h>

//FUNÇÃO RECURSIVA PARA IMPRIMIR NÚMEROS DE 5 ATÉ 1//
void moverTorre ( int casas){
    if (casas > 0){
        printf ("Mover a peça 'TORRE' no tabuleiro para a Direita >>>> \n"); //IMPRIMIR O MOVIMENTO DA PEÇA TORRE.
        moverTorre (casas - 1); //CHAMA A SI MESMA COM casas - 1 //
    }
    printf ("\n");    
}
//FUNÇÃO RECURSIVA PARA IMPRIMIR NÚMEROS DE 8 ATÉ 1//
void moverRainha ( int casas){
    if (casas > 0){
        printf ("Mover a peça 'RAINHA' no tabuleiro para a Esquerda <<<< \n");//IMPRIMIR O MOVIMENTO DA PEÇA RAINHA.
        moverRainha (casas - 1); //CHAMA A SI MESMA COM casas - 1 //
    }
    printf ("\n");
}
//FUNÇÃO RECURSIVA PARA IMPRIMIR NÚMEROS DE 5 ATÉ 1//
void moverBispo ( int casas){
    if (casas > 0){
        printf ("Mover a peça 'BISPO' no tabuleiro para na Diagonal para Cima a Direita ^>^>\n");//IMPRIMIR O MOVIMENTO DA PEÇA BISPO.
        moverBispo (casas - 1); //CHAMA A SI MESMA COM casas - 1 //
    }
    printf ("\n");
}

// CHAMADA DA FUNÇÃO RECURSIVA
int main(){

    moverTorre(5); //CHAMADA DA FUNÇÃO MOVERTORRE

    moverRainha(8); //CHAMADA DA FUNÇÃO MOVERRAINHA

    moverBispo(5); //CHAMADA DA FUNÇÃO MOVERBISPO

    int i = 0 ; // DECLARANDO VARIÁVEL PARA OS MOVIMNETOS DAS PEÇAS TORRE, RAINHA E BISPO//
    
    int movimentoCavalo = 1; //VARÁVEL PARA MOVIMENTO EM 'L' DA PEÇA CAVALO NO TABULEIRO//

    while (movimentoCavalo --){ //DECLARANDO LOOP EXTERNO//

        for (int i = 0; i < 2; i++){ //DECLARANDO LOOP INTERNO//
            printf ("Move a peça 'CAVALO' no tabuleiro para Cima ^^^^ \n");  //IMPRIME MOVE A PEÇA CAVALO PARA CIMA DUAS VEZES//
              }
              printf("Move a peça 'CAVALO' no tabuleiro para Direita >>>> \n");//IMPREME MOVE A PEÇA CAVALO PARA ESQUERDA UMA VEZ//
    }


    return 0;
}