#include <math.h>
#include <stdio.h>
double withFormula(int n)
{
    double p = pow(5, 0.5);
    double f = (double)(((1 / p) * pow(((1 + p) / 2), n)) - ((1 / p) * pow(((1 - p) / 2), n)));
    return f;
}
int withoutFormula(int n)
{
    if (n == 1)
        return 1;
    else
    {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
int main()
{
    int n, b;
    double a;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    a = withFormula(n);
    printf("With Formula: %lf\n", a);
    b = withoutFormula(n);
    printf("Without Formula: %d\n", b);
    if (a == b)
        printf("Yes they are same!");
    else
        printf("No they aren't same!");
}
