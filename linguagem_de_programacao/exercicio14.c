#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define T 9
/*
    14. Gere uma matriz 9 X 9, com valores aleatórios somente ímpares. Crie um
        vetor com 81 posições que deverá ser alimentado com os dados da matriz
        ordenados em ordem crescente.
*/

int main(void) {
    int matriz[T][T] = {0}, vetor[T*T], valor = 0;
    srand(time(0));

    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            valor = (rand() % (1001 - 1 + 1)) + 1;
            matriz[i][j] =  valor % 2 == 0 ? valor + 1 : valor;
        }
    }

      for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
                printf(" |%4d| ",  matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}

int acharMaior(int * vetor, int tamanho){
    int maior = 0;
    for(int i = 0; i < tamanho; i++){
        if(i == 0 || vetor[i] > maior)
            maior = vetor[i]; 
            vetor[i] = 0;
    }
}