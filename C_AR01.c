#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int size = 100;

int main()
{
    int *num;
    num = malloc(sizeof(int) * size);
    char *str;
    str = malloc(sizeof(char) * size);
    int IntCntr = 0;

    gets(str);

    char *sep = strtok(str, " ");
    num[IntCntr] = atoi(sep);
    IntCntr += 1;
    while (sep != NULL)
    {
        sep = strtok(NULL, " ");
        if (sep != NULL)
        {
            num[IntCntr] = atoi(sep);
            IntCntr += 1;
        }
    }

    for(int NumCntr = IntCntr-1; NumCntr>=0; NumCntr--)
    {
        if(NumCntr == 0)
            printf("%d", num[NumCntr]);
        else
            printf("%d ", num[NumCntr]);
    }  
    printf("\n");
}