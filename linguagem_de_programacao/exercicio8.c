#include <stdio.h>
#define T 5
/*
     8. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde
    se encontram o maior e o menor valor.
*/
int main(){
    int vetorA[T] = {0}, maior = 0, menor = 0, posMaior = 0, posMenor = 0;

    for(int i = 0; i < T; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);
    }

    for(int j = 0; j < T; j++){
       if(vetorA[j] > maior || j == 0){
            maior = vetorA[j];
            posMaior = j;
       } if (vetorA[j] < menor || j == 0){
            menor = vetorA[j];
            posMenor = j;
       }
    }

    printf("Posicao do maior: %d, valor: %d \n", posMaior, maior);
    printf("Posicao do menor: %d, valor: %d \n", posMenor, menor);
}