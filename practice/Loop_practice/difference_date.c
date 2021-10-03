#include <stdio.h>
#include <string.h>

int main()
{
    int d1, m1, y1, diff;
    int d2, m2, y2;
    printf("Enter date 1 :");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    printf("Enter date 2 :");
    scanf("%d/%d/%d", &d2, &m2, &y2);
     if (y1 > y2)
    {
        if (m1 > m2)
        {
            if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
        }
        else if (m2 > m1)
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m2-m1)*30)+((y1-y2)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m2-m1)*30)+((y1-y2)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m2-m1)*30)+((y1-y2)*365)));
            }
        }
        else
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
        }
    }
    else if (y1 < y2)
    {
        if (m1 > m2)
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y2-y1)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m1-m2)*30)+((y2-y1)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y2-y1)*365)));
            }
        }
        else if (m2 > m1)
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m2-m1)*30)+((y2-y1)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m2-m1)*30)+((y2-y1)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m2-m1)*30)+((y2-y1)*365)));
            }
        }
        else
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y2-y1)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m1-m2)*30)+((y2-y1)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y2-y1)*365)));
            }
        }
    }
    else

    {
        if (m1 > m2)
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
        }
        else if (m2 > m1)
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m2-m1)*30)+((y1-y2)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m2-m1)*30)+((y1-y2)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m2-m1)*30)+((y1-y2)*365)));
            }
        }
        else
        {
             if (d1 > d2)
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else if (d2 > d1)
            {
                printf("%d", ((d2-d1)+((m1-m2)*30)+((y1-y2)*365)));
            }
            else
            {
                printf("%d", ((d1-d2)+((m1-m2)*30)+((y1-y2)*365)));
            }
        }
    }
    return 0;
}