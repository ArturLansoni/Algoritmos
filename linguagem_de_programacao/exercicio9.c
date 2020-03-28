#include <stdio.h>
#define T 5
/*
    9. Faça um programa para gerar uma matriz quadrada 5 x 5 cujos valores
    representem uma matriz triangular superior.
*/
int main(){
    int matriz[T][T] = {0};
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(j > i){
                printf("Digite um valor: ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
                printf(" |%2d| ", matriz[i][j]);
        }
         printf("\n");
    }
}
