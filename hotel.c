#include<stdio.h>
int main()
{
	int n,x,j,ss,se;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(x=2;x<n;x++)
	{
		se=ss=0;
		for(j=1;j<=n;j++)
		{
			if(j<x)
			ss+=j;
			else if(j>x)
			se+=j;
		}

		if(ss==se)
		{
		printf("The room number is: %d\n",x);
		return 0;
		}
	
	}
	printf("Room number not found!!\n");
	return 0;
}
