#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    gcd(b % a, a);
}
int gcd1(int a, int b)
{
    int g, i;
    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
            g = i;
    }
    return g;
}

int main()
{
    int a, b, g;
    printf("Enter 2 numbers:");
    scanf("%d %d", &a, &b);
    g = (a < b) ? gcd(a, b) : gcd(b, a);
    printf("GCD(%d,%d) using Eulerian method = %d\n", a, b, g);
    g = gcd1(a, b);
    printf("GCD(%d,%d) using Factorization method = %d\n", a, b, g);
    return 0;
}