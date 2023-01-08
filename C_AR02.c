#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int size = 6;

int main()
{
    int *num;
    num = malloc(sizeof(int) * size);

    for (int CntrNum = 0; CntrNum < size; CntrNum++)
        scanf("%d", &num[CntrNum]);

    for (int CntrNum = size - 1; CntrNum >= 0; CntrNum--)
    {
        if (CntrNum == 0)
            printf("%d", num[CntrNum]);
        else
            printf("%d ", num[CntrNum]);
    }
    printf("\n");
}