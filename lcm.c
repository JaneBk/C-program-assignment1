#include<stdio.h>
#define MAX(a,b) (((a) >(b))? (a):(b))
int main()
{
	int lcm=1,b,n,j;

	printf("Enter the number of integers you want to use: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	for(j=0;j<n;j++){
		scanf("%d", &b);
		for(int i=MAX(lcm,b);i<=lcm*b;i++)	
		{
			if(i%lcm==0 && i%b==0)
			{
				lcm=i;
				break;
			}
		}
	}
	printf("\n%d is the LCM. \n",lcm);
	return 0;
}

