#include <stdio.h>

int main()
{
    int m, n, i;

    printf("\nEnter m: ");
    scanf("%d", &m);

    printf("Enter n: ");
    scanf("%d", &n);

    printf("\nAll even numbers between %d and %d in reverse order are: ", m, n);

    for (i = n; i >= m; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
