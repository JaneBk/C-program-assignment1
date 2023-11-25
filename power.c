#include <stdio.h>
int main()
{
    int a, b, value = 1;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        value *= a;
    }
    printf("%d raised to the power %d is: %d", a, b, value);
    return 0;
}