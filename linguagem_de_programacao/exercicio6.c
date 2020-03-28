#include <stdio.h>
#define T 10
/*
    6. Faça um programa que preencha um vetor com 10 números reais, calcule e
    mostre a quantidade de números negativos e a soma dos números positivos
    desse vetor.
*/
int main(){
    int vetorA[T] = {0}, valor = 0, i = 0, quantNegativos = 0, somaPositivos = 0;

    for(int i = 0; i < T; i++){
        int valor = 0;
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);
    }

    for(int j = 0; j < T; j++){
        if(vetorA[j] < 0)
            quantNegativos++;
        else
            somaPositivos += vetorA[j];
    }

    printf("Quantidade de negativos: %d \n", quantNegativos);
    printf("Soma dos positivos: %d \n", somaPositivos);
}
