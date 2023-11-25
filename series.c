
#include <stdio.h>
#include <math.h>

double fact(int n)
{
    double f = 1.0;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
void series1()
{
    double sum = 0;
    double f;
    for (int i = 1; i <= 10; i++)
    {
        f = fact(i);
        sum += i / f;
    }
    printf("\nSum of the given series is: %lf\n", sum);
}
void series2()
{
    float x, Q, sum = 0;
    int i, j, limit;

    printf("\nEnter the value of x of sin(X) series: ");
    scanf("%f", &x);

    printf("Enter the limit upto which you want to expand the series: ");
    scanf("%d", &limit);

    Q = x;
    x = x * (3.1415 / 180);

    for (i = 1, j = 1; i <= limit; i++, j = j + 2)
    {
        if (i % 2 != 0)
        {
            sum = sum + pow(x, j) / fact(j);
        }
        else
            sum = sum - pow(x, j) / fact(j);
    }

    printf("Sin(%0.1f): %f\n", Q, sum);
}
void series3()
{
    int i, n;
    float xx, x, sum = 1, t = 1;

    printf("\nEnter the value of x for cox(X) series: ");
    scanf("%f", &xx);

    printf("Enter the value for n : ");
    scanf("%d", &n);

    x = xx * 3.14159 / 180;

    /* Loop to calculate the value of Cosine */
    for (i = 1; i <= n; i++)
    {
        t = t * (-1) * x * x / (2 * i * (2 * i - 1));
        sum = sum + t;
    }

    printf("The value of Cos(%0.1f) is : %.4f\n", xx, sum);
}
void series4()
{
    double x, y;
    int n;
    printf("\nEnter the value of x for Log(1+X): ");
    scanf("%d", &n);
    x = n + 1;
    y = log(x);
    printf("The natural logarithm of (%0.2lf) is %lf\n", x, y);
}
int main()
{
    series1();
    series2();
    series3();
    series4();
}