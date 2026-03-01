#include <stdio.h>
long long factorial(int n) 
{
    if (n == 0 || n == 1)
    {
        return 1;
    } 
    else
    {
        return n * factorial(n - 1);
    }
}
int main() 
{
    int number;
    long long fact;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    if (number < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else
    {
        fact = factorial(number);
        printf("Factorial of %d = %lld\n", number, fact);
    }

    return 0;
}
