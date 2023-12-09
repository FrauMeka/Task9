#include <stdio.h>

#define MAX 100

int na, ma, nb, mb;

int **a, **b, **c,v;

void Read(int **&matr, int n, int m)

{

    matr = new int *[n];

    for (int i = 0; i < n; i++)

    {

        matr[i] = new int[m];

        for (int j = 0; j < m; j++)

            scanf("%d", &matr[i][j]);
    }
}

void Mult(int **a, int **b, int **&c, int m, int n, int q)

{

    c = new int *[m];

    for (int i = 0; i < m; i++)

    {

        c[i] = new int[q];

        for (int j = 0; j < q; j++)

        {

            c[i][j] = 0;

            for (int k = 0; k < n; k++)

                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

void Print(int **a, int n, int m)

{

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < m; j++)

            printf("%d ", a[i][j]);

        printf("\n");
    }
}

int main(void)

{

    scanf("%d %d", &na, &ma);

    Read(a, na, ma);

    scanf("%d %d", &nb, &mb);

    Read(b, nb, mb);

    if (ma != nb)

    {

        printf("-1\n");

        return 0;
    }

    Mult(a, b, c, na, ma, mb);

    printf("%d %d\n", na, mb);

    Print(c, na, mb);

    return 0;
}