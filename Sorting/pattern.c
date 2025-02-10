#include <stdio.h>
#include<stdlib.h>
#define n 5
int main()
{
    for (int i = -n; i <= n; i++)
    {
        for (int j = -n; j <= n; j++)
        {
            if (abs(i) == abs(j))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}