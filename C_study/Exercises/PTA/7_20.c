#include<stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 1;
    int j = 1;

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
             printf("%d*%d=%-4d", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}