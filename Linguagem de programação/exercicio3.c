#include <stdio.h>
#define T 10
/*
     3. Crie um programa que lê 10 valores inteiros e, em seguida, mostre na tela os
    valores lidos na ordem inversa.
*/
int main(){
    int vetorA[T] = {0};

    for(int i = 0; i < T; i++){
        int valor = 0;
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);
    }

    for(int k = (T - 1); k >= 0; k--){
        printf(" Indice: %d | Vetor A: %d \n", k, vetorA[k]);
    }
}
