#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 10
/*
    12. Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla
        escolha, referentes a 5 alunos. Leia também um vetor de 10 posições
        contendo o gabarito de respostas que podem ser a, b, c ou d. a. Seu programa devera comparar as respostas de cada candidato com o
        gabarito e emitir um vetor denominado resultado, contendo a
        pontuação correspondente a cada aluno
*/
int verifica(char c);
int comparar(char ch1, char ch2);

int main(){
     char respostas[L][C], gabarito[C], valor = "";
     int i = 0, j = 0, k = 0, acertos[C] = {0};

    do{
        printf("Aluno %d \n", i + 1);
        do{
            printf("Digite a resposta: A, B, C ou D \n");
            scanf("%c",&valor);
            if(verifica(valor)){
                respostas[i][j] = valor;
                j++;
            } else
                printf("Digite um valor valido! \n");
        } while(j < C);
        i++;
        j = 0;
    } while(i < L);

    printf("Preencha o gabarito \n");
     do{
            printf("Digite a resposta: A, B, C ou D \n");
            scanf("%c",&valor);
            if(verifica(valor)){
                gabarito[k] = valor;
                k++;
            }
        } while(k < C);

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            if(comparar(gabarito[j], respostas[i][j]) == 1)
                acertos[i] += 1;
        }
    }

     for(i = 0; i < L; i++){
        printf("Aluno numero %d, acertos: %d \n", i + 1, acertos[i]);
    }

    return 0;
}

int verifica(char ch){

    switch(ch) {
        case 'A':
        case 'B':
        case 'C':
        case 'D':
            return 1;
        default:
            return 0;
  }
}

int comparar(char ch1, char ch2){
    if(ch1 == ch2)
        return 1;
    return 0;
}
