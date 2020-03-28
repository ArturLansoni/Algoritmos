#include <stdio.h>
#define T 15
/*
    5. Faça um programa para ler a nota da prova de 15 alunos e armazene num
    vetor, calcule e imprima a média geral.
*/
int main(){
    int vetorA[T] = {0}, valor = 0, i = 0;
    float soma = 0;

    do {
        printf("Digite a nota do aluno: ");
        scanf("%d", &valor);
        if(valor >= 0 && valor <= 10)
            vetorA[i++] = valor;
        else
           printf("Valor da nota invalido! \n");
    } while(i < T);

    for(int j = 0; j < T; j++){
          soma += vetorA[j];
    }

    printf("Media das notas: %.2f", soma / T);
}
