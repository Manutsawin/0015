#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int x[3], loop, max;
    for (loop = 0; loop < 3; loop++)
    {
        scanf("%d", &x[loop]);
    }
    if (x[2] - x[1] > x[1] - x[0] && x[2] - x[1] > 0)
    {
        max = x[2] - x[1] - 1;
    }
    else
    {
        max = x[1] - x[0] - 1;
    }
    printf("%d", max);
    return 0;
}
