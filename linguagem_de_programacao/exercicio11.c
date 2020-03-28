#include <stdio.h>
#define T 4
/*
  11. Faça um programa que leia dois números a e b (positivos menores que 10000)
    e: Crie dois vetores va e vb onde cada posição é um algarismo do número. A
    primeira posição é o algarismo menos significativo.
*/
int main(){
    int num1 = 0, num2 = 0, valor = 0, i = 0;
    int vetorA[T] = {0};
    int vetorB[T] = {0};

    do{
        printf("Digite um numero positivo menor que 10000 \n");
        scanf("%d",&valor);
        if(valor > 0 && valor < 10000 && i == 0){
            i++;
            num1 = valor;
        } else if(valor > 0 && valor < 10000 && i == 1){
            i++;
            num2 = valor;
        }
    }while(i >= 0 && i < 2);

    i = 0;
    while(num1 > 0){
        vetorA[i++] = num1 % 10;
        num1 = num1 / 10;
    }
    i = 0;
    while(num2 > 0){
        vetorB[i++] = num2 % 10;
        num2 = num2 / 10;
    }

    for (int j = 0; j < T; j++)
        printf("VetorA[%d] = |%2d| \n",j, vetorA[j]);

    for (int k = 0; k < T; k++)
        printf("VetorB[%d] = |%2d| \n",k, vetorB[k]);
}
