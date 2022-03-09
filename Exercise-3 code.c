#include <stdio.h>

int main()
{
    int i = 4, n, sum = 0;

    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i += 7;
    }
    printf("Sum of this series is %d\n\n", sum);

    return 0;
}