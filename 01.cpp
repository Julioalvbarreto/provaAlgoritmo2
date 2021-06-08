#include <stdio.h>
#include <math.h>

int main()
{
    int c1, c2, r, p1, p2, d;

    printf("Imforme coordenada Xc: \n");
    scanf("%d", &c1);
    printf("Imforme coordenada Yc: \n");
    scanf("%d", &c2);
    printf("Imforme raio: \n");
    scanf("%d", &r);
    printf("Informe os dois pontos a serem testados: \n");
    scanf("%d %d", &p1, &p2);
    r = sqrt(r);

    d = ((p1 * p1 - p1 * c1) - (c1 * p1 - c1 * c1)) + ((p2 * p2 - p2 * c2) - (c2 * p2 - c2 * c2));
    d = sqrt(d);

    if (d > r)
    {
        printf("Fora do circulo.\n");
        printf("Distancia do centro para o ponto: %d\nRaio: %d", d, r);
    }
    else if (d == r)
    {
        printf("Na linha da circuferencia.\n");
        printf("Distancia do centro para o ponto: %d\nRaio: %d", d, r);
    }
    else if (d < r)
    {
        printf("Dentro do circulo.\n");
        printf("Distancia do centro para o ponto: %d\nRaio: %d", d, r);
    }

    return 0;
}
