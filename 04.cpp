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
        printf("a opcao escolhida foi: gravar\n");
        break;
    case 2:
        printf("a opcao escolhida foi: carregar\n");
        break;
        printf("a opcao escolhida foi: carregar\n");
    case 3:
        printf("a opcao escolhida foi: apagar\n");
        break;
    case 4:
        printf("a opcao escolhida foi: inserir\n");
        break;
    case 5:
        printf("a opcao escolhida foi: finalizar\n");
        break;
    default:
        printf("opcao invalida");
    }

    return 0;
}