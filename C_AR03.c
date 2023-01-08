#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int size = 6;
int PowNum = 3;

int main()
{
    int *num;
    num = malloc(sizeof(int) * size);

    int *tmp;
    tmp = malloc(sizeof(int) * size);

    for (int CntrNum = 0; CntrNum < size; CntrNum++)
        scanf("%d", &num[CntrNum]);

    for (int CntrNum = 0; CntrNum < size; CntrNum++)
        tmp[CntrNum] = num[CntrNum];

    int sum = 0;
    for (int CntrNum = 0; CntrNum < size; CntrNum++)
    {
        for (int CntrPow = 0; CntrPow < PowNum -1; CntrPow++)
            tmp[CntrNum] = tmp[CntrNum] * num[CntrNum];
        sum += tmp[CntrNum];
    }
    printf("%d\n", sum);
}