#include < stdio.h >
#include < stdlib.h >

    int main()
{
    int opcao = 0, result = 0, num = 0, num2 = 0;

    while (opcao != 4) {
        printf(" 1. Permutacao Simples \n 2. Arranjo Simples \n 3. Combinacao Simples \n 4. Sair \n\n ");
        scanf("%d", & opcao);
        switch (opcao) {
            case 1:
                printf(" Digite um numero: ");
                scanf("%d", & num);
                if (num < 0) {
                    result = num;
                    break;
                }
                result = fatorial(num);
                break;
            case 2:
                result = arranjoSimples();
                break;
            case 3:
                result = combinacaoSimples();
                break;
            case 4:
                return 0;
                break;
        }
        if (result < 0)
            printf(" Impossivel realizar essa operacao \n");
        else
            printf(" Resultado = %d \n", result);
    }
    return 0;
}

int fatorial(int num){
    int result = 1;
    if (num == 0)
        return 1;
    for (int i = num; i > 0; i--) {
        result = result * i;
    }
    return result;
}

int arranjoSimples(){
    int num1 = 0, num2 = 0, result = 0;

    printf(" Digite o primeiro numero: ");
    scanf("%d", & num1);
    printf(" Digite o segundo numero: ");
    scanf("%d", & num2);
    if (num1 == 0 && num2 == 0)
        return 1;
    if (num1 < 0 || num2 < 0 || num1 < num2)
        return -1;

    result = fatorial(num1) / fatorial(num1 - num2);
    return result;
}

int combinacaoSimples(){
    int num1 = 0, num2 = 0, result = 0;

    printf(" Digite o primeiro numero: ");
    scanf("%d", & num1);
    printf(" Digite o segundo numero: ");
    scanf("%d", & num2);

    if (num1 == 0 && num2 == 0)
        return 1;
    if (num1 < 0 || num2 < 0 || num1 < num2)
        return -1;

    result = fatorial(num1) / (fatorial(num2) * fatorial(num1 - num2));
    return result;  
}