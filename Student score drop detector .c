#include <stdio.h>

int main()
{
    int n, i, mark;
    int sum = 0, fail = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &mark);
        sum = sum + mark;
        if(mark < 40)
        {
            fail = fail + 1;
        }
    }

    printf("Average scores : %d\n", sum / n);
    printf("Failed subjects : %d", fail);

    return 0;
}
