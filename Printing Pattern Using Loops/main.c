#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) < (b) ? (b) : (a))

int main()
{

    int n, i, j;

    scanf("%d", &n);
    for (i = -n + 1; i < n; i++)
    {
        for (j = -n + 1; j < n; j++)
        {
            printf("%d ", MAX(abs(i), abs(j)) + 1);

        }
        printf("\n");
    }

    return 0;
}
