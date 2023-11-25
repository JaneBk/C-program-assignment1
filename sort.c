#include <stdio.h>
int main()
{
    int a[5] = {1, 3, 15, 27, 39}, b[5] = {2, 14, 16, 28, 30}, c[10], pa = 0, pb = 0;
    for (int i = 0; i < 10; i++)
    {
        if (pa <= 5 && pb == 5)
        {
            c[i] = a[pa];
            pa++;
        }
        else if (pa == 5 && pb <= 5)
        {
            c[i] = b[pb];
            pb++;
        }
        else if (a[pa] < b[pb])
        {
            c[i] = a[pa];
            pa++;
        }
        else if (b[pb] < a[pa])
        {
            c[i] = b[pb];
            pb++;
        }
        else if (a[pa] == b[pb])
        {
            c[i] = a[pa];
            pa++;
            pb++;
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", c[i]);
}