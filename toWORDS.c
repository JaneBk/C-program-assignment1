#include <stdio.h>
char arr[][10] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                  "ten", "eleven", "twelve", "thirteen", "forteen", "fifteen", "sixteen",
                  "seventeen", "eigteen", "ninteen"};
char arr1[][10] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty",
                   "ninety", "hundred"};
int a, amt;
void word(int);
int main()
{
    printf("Enter the amount in numbers: ");
    scanf("%d", &a);
    amt = a;
    if (a >= 10000000 && a <= 99999999)
    {
        int i = a / 10000000;
        printf("%s crore ", arr[i]);
        a = a % 10000000;
    }
    if (a >= 1000000 && a <= 9999999)
    {
        int i = a / 100000;
        if (i % 10 == 0)
            printf("%s lakh ", arr1[i / 10]);
        else
        {
            printf("%s %s lakh ", arr1[i / 10], arr[i % 10]);
        }
        a = a % 100000;
    }
    if (a >= 100000 && a <= 999999)
    {
        int i = a / 100000;
        printf("%s lakh ", arr[i]);
        a = a % 100000;
    }
    word(a);
    printf("\n");
    if (amt >= 10000000 && amt <= 99999999)
    {
        int i = amt / 1000000;
        if (i % 10 == 0)
            printf("%s million ", arr1[i / 10]);
        else
        {
            printf("%s %s million ", arr1[i / 10], arr[i % 10]);
        }
        amt = amt % 1000000;
    }
    if (amt >= 1000000 && amt <= 9999999)
    {
        int i = amt / 1000000;
        printf("%s million ", arr[i]);
        amt = amt % 1000000;
    }
    if (amt >= 100000 && amt <= 999999)
    {
        int i = amt / 100000;
        printf("%s hundred ", arr[i]);
        amt = amt % 100000;
        if (amt == 0)
            printf("thousand");
    }
    word(amt);
}

void word(int a)
{
    if (a >= 20000 && a <= 99999)
    {
        int i = a / 1000;
        if (i % 10 == 0)
            printf("%s thousand ", arr1[i / 10]);
        else
        {
            printf("%s %s thousand ", arr1[i / 10], arr[i % 10]);
        }
        a = a % 1000;
    }

    if (a >= 1000 && a <= 19999)
    {
        int i = a / 1000;
        printf("%s thousand ", arr[i]);
        a = a % 1000;
    }

    if (a < 1000 && a > 99)
    {
        int i = a / 100;
        printf("%s %s ", arr[i], arr1[10]);
        a = a % 100;
    }
    if (a >= 20 && a <= 99)
    {
        int i = a / 10;
        int rem = a % 10;
        printf("%s %s ", arr1[i], arr[rem]);
    }
    if (a > 0 && a < 20)
    {
        printf("%s ", arr[a]);
    }
}