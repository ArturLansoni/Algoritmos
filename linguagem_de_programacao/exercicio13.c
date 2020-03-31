#include <stdio.h>
#include <stdlib.h>
#define T 5
/*
    13. Gere uma matriz 7 X 7, do tipo identidade.
*/
int main(){
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
                printf("|%2d|", i == j ? 1 : 0);            
        } 
        printf("\n");
    }

    return 0;
}

