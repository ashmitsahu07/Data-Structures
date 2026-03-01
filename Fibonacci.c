#include <stdio.h>

/* Function to return nth Fibonacci number */
int fibbo(int n)
{
    if (n < 0)
        return -1;              // invalid case
    else if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibbo(n - 1) + fibbo(n - 2);
}

int main()
{
    int a, i;

    printf("Enter the value till the Fibonacci should be there: ");
    scanf("%d", &a);

    printf("Fibonacci series:\n");

    for (i = 0; i <= a; i++)
    {
        printf("%d ", fibbo(i));
    }

    return 0;
}
