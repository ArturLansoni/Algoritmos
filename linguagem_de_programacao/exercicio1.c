#include <stdio.h>
#define T 5
/*
    1. Desenvolver um programa que leia 5 elementos de um vetor A. – No final, apresente:
    a. A soma de todos os valores ímpares. 
    b. A soma de todos os valores pares. 
    c. A soma total. 
    d. E a porcentagem de números ímpares em relação aos pares.
*/
int main(){
    int vetor[T] = {0};
    float somaImpar = 0, somaPar = 0, somaTotal = 0;

    for(int i = 0; i < T; i++){
        int valor = 0;
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }
    for(int j = 0; j < T; j++){
        if(vetor[j] % 2 == 0)
            somaPar += vetor[j];
        else
            somaImpar += vetor[j];
        somaTotal += vetor[j];
    }

    printf("Soma dos pares  = %.2f \n", somaPar);
    printf("Soma dos impares  = %.2f \n", somaImpar);
    printf("Soma total  = %.2f \n", somaTotal);
    printf("Porcentagem de numeros impares em relacao aos pares = %.2f \n", (somaImpar / somaPar) * 100);
}
