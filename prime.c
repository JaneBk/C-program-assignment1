#include <stdio.h>
#include <math.h>
int main()
{
	int n, i, j, c;
	printf("Enter the limit: ");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		c = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				c = 1;
				break;
			}
		}
		if (c == 0)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}
