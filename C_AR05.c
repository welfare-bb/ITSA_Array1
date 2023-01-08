#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rst = 0;
    int ans = 0;
    scanf("%d", &rst);

    int sch[30][25] = {0};

    for (int CntrRst = 0; CntrRst < rst; CntrRst++)
    {
        int s, d;
        scanf("%d %d", &s, &d);

        int flag = 0;
        for (int CntrRow = 0; CntrRow < 30; CntrRow++)
        {
            flag = 0;
            for (int CntrWay = s; CntrWay <= d; CntrWay++)
            {
                if (sch[CntrRow][CntrWay] != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                for (int CntrWay = s; CntrWay < d; CntrWay++)
                    sch[CntrRow][CntrWay] = 1;
                flag = 0;
                break;
            }
        }
    }

    int car = 0;
    for (int CntrRow = 0; CntrRow < 30; CntrRow++)
    {
        
        for (int CntrCol = 0; CntrCol < 25; CntrCol++)
        {
            if (sch[CntrRow][CntrCol]!=0)
            {
                car += 1;
                break;
            }
        }
        
    }
    printf("%d\n",car);
}