#include <stdio.h>
#include <stdlib.h>

int ReqNum;
int row, col;

int main()
{
    scanf("%d", &ReqNum);
    for (int CntrReq = 0; CntrReq < ReqNum; CntrReq++)
    {
        scanf("%d %d", &row, &col);

        int graph[row][col];
        for (int CntrRow = 0; CntrRow < row; CntrRow++)
        {
            for (int CntrCol = 0; CntrCol < col; CntrCol++)
                scanf("%d", &graph[CntrRow][CntrCol]);
        }

        for (int CntrRow = 0; CntrRow < row; CntrRow++)
        {
            for (int CntrCol = 0; CntrCol < col; CntrCol++)
            {
                int now = graph[CntrRow][CntrCol];
                if (now == 1)
                {
                    if (graph[CntrRow - 1][CntrCol] == 0)
                        printf("0 ");
                    else if (graph[CntrRow + 1][CntrCol] == 0)
                        printf("0 ");
                    else if (graph[CntrRow][CntrCol - 1] == 0)
                        printf("0 ");
                    else if (graph[CntrRow][CntrCol + 1] == 0)
                        printf("0 ");
                    else
                        printf("_ ");
                }
                else
                    printf("_ ");
            }
            printf("\n");
        }
        if (CntrReq != ReqNum - 1)
            printf("\n");
    }
}