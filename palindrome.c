#include <stdio.h>
int main()
{
	int n, rev = 0;
	printf("Enter the number:");
	scanf("%d", &n);
	for (int i = n; i != 0; i = i / 10)
	{
		rev = rev * 10 + i % 10;
	}
	printf("\nReverse: %d\n", rev);
	if (rev == n)
		printf("\nPalindrome Number\n");
	else
		printf("\nNot a Palindrome Number\n");
	return 0;
}
