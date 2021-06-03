#include <stdio.h>
int main()
{
    float n1, n2, n3, me, media;
    scanf("%f %f %f %f", &n1, &n2, &n3, &me);

    media = ((n1 + (n2 * 2) + (n3 * 3) + me)) / 7;

    if (media >= 9.0)
    {
        printf("A\n");
    }
    else if (media >= 7.5 && media < 9.0)
    {
        printf("B\n");
    }
    else if (media >= 6.0 && media < 7.5)
    {
        printf("C\n");
    }
    else if (media >= 4.0 && media < 6.0)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }

    return 0;
}