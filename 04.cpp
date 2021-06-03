#include <stdio.h>
int main()
{

    int x, i;
    printf("EScolha as opcoes no menu:\n");
    printf("1 - Gravar\n2 - Carregar\n3 - Apagar\n4 - Inserir\n5 - Fim\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("a opcao escolhida foi: Gravar\n");
        break;
    case 2:
        printf("a opcao escolhida foi: Carregar\n");
        break;
        
    case 3:
        printf("a opcao escolhida foi: Apagar\n");
        break;
    case 4:
        printf("a opcao escolhida foi: Inserir\n");
        break;
    case 5:
        printf("a opcao escolhida foi: Finalizar\n");
        break;
    default:
        printf("opcao invalida");
    }

    return 0;
}
