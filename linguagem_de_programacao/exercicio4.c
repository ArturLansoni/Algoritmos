#include <stdio.h>
#define T 10
/*
    4. Crie um programa que lê 10 valores inteiros pares e, em seguida, mostre na
    tela os valores lidos na ordem inversa.
*/
int main(){
    int vetorA[T] = {0}, valor = 0, i = 0;

    do{
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if(valor % 2 == 0)
            vetorA[i++] = valor;
    } while(i < T);

    for(int k = (T - 1); k >= 0; k--){
        printf(" Indice: %d | Vetor A: %d \n", k, vetorA[k]);
    }
}
