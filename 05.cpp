#include <stdio.h>
int main()
{
    float n1, n2, n3, me, med2, med;
    int numIden;
    printf("coloque o numero de identificacao:\n");
    scanf("%d", &numIden);
    printf("coloque as 3 notas");
    scanf("%f %f %f", &n1, &n2, &n3);

    med = (n1 + n2 + n3) / 3;
    med2 = ((n1 + (n2 * 2) + (n3 * 3) + me)) / 7;

    if (med2 >= 9.0)
    {
        printf("o numero de idetificacao eh: %d\n", numIden);
        printf("a media eh: %.2f\n", med);
        printf("a media de aproveitamento eh: %.2f\n");
        printf("A\n");
        printf("Aprovado\n");
    }
    else if (med2 >= 7.5 && med2 < 9.0)
    {
        printf("o numero de idetificacao eh: %d\n", numIden);
        printf("a media eh: %.2f\n", med);
        printf("a media de aproveitamento eh: %.2f\n");
        printf("B\n");
        printf("Aprovado\n");
    }
    else if (med2 >= 6.0 && med2 < 7.5)
    {
        printf("o numero de idetificacao eh: %d\n", numIden);
        printf("a media eh: %.2f\n", med);
        printf("a media de aproveitamento eh: %.2f\n");
        printf("C\n");
        printf("Aprovado\n");
    }
    else if (med2 >= 4.0 && med2 < 6.0)
    {
        printf("o numero de idetificacao eh: %d\n", numIden);
        printf("a media eh: %.2f\n", med);
        printf("a media de aproveitamento eh: %.2f\n");
        printf("D\n");
    }
    else
    {
        printf("o numero de idetificacao eh: %d\n", numIden);
        printf("a media eh: %.2f\n", med);
        printf("a media de aproveitamento eh: %.2f\n");
        printf("F\n");
        printf("Reprovado\n");
    }

    return 0;
}