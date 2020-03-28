#include <stdio.h>
#define L 5
#define C 2
/*
  10. Faça um programa que leia duas matrizes A e B, cada uma com uma dimensão
    de 4 linhas por duas colunas. Construa uma matriz C com a mesma dimensão
    que seus elementos deverão conter as somas dos valores de mesma posição
    na matriz A e B.
*/
int main(){
    int matrizA[L][C] = {0};
    int matrizB[L][C] = {0};
    int matrizC[L][C] = {0};

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
                printf("Digite um valor para a matriz A: ");
                scanf("%d", &matrizA[i][j]);
                printf("Digite um valor para a matriz B: ");
                scanf("%d", &matrizB[i][j]);
        }
    }
     for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
               matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
         printf("\n");
    }

    printf("Matriz A: \n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
                printf(" |%2d| ", matrizA[i][j]);
        }
         printf("\n");
    }
    printf("Matriz B: \n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
                printf(" |%2d| ", matrizB[i][j]);
        }
         printf("\n");
    }
    printf("Matriz C: \n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
                printf(" |%2d| ", matrizC[i][j]);
        }
         printf("\n");
    }
}
