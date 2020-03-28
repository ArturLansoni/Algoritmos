#include <stdio.h>
#define T 10
/*
    2. Desenvolva um programa que faça a leitura de 10 valores no vetor A. Construir um vetor B do mesmo tipo, observando a seguinte formatação:
    a. Se o valor do índice for par, o valor deverá ser multiplicado por 5;
    b. Se o valor do índice for ímpar, deverá ser somado com 5.
    c. Ao final mostrar os conteúdos dos dois vetores invertidos (listar ao contrário).
*/
int main(){
    int vetorA[T] = {0};
    int vetorB[T] = {0};

    for(int i = 0; i < T; i++){
        int valor = 0;
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);
    }

    for(int j = 0; j < T; j++){
        vetorB[j] = j % 2 == 0 ? vetorA[j] * 5 : vetorA[j] + 5;
    }

    for(int k = (T - 1); k >= 0; k--){
        printf(" Indice: %d | Vetor A: %d | Vetor B: %d \n", k, vetorA[k], vetorB[k] );
    }
}
