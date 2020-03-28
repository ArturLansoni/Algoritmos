#include <stdio.h>
#define T 5
/*
    7. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
    lidos juntamente com o maior, o menor e a média dos valores.
*/
int main(){
    int vetorA[T] = {0}, maior = 0, menor = 0;
    float soma = 0;

    for(int i = 0; i < T; i++){
        int valor = 0;
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);
        if(vetorA[i] > maior)
            maior = vetorA[i];
        if (vetorA[i] < menor || i == 0)
            menor = vetorA[i];
    }

    for(int j = 0; j < T; j++){
        soma += vetorA[j];
    }

    printf("Maior: %d \n", maior);
    printf("Menor: %d \n", menor);
    printf("Media: %.2f \n", soma /  T);
}