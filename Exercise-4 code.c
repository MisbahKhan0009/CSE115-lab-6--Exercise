#include <stdio.h>
#include <math.h>

int main()
{
    int n, j, i = 2, sum = 0;

    printf("\nEnter the last value of the series: ");
    scanf("%d", &n);

    while (i <= n)
    {
        j = pow(i, 3);
        sum += j;
        i += 3;
    }
    printf("sum = %d\n\n", sum);

    return 0;
}