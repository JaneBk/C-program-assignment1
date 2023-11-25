#include<stdio.h>
int main()
{
	int value,money[]={100,50,20,10,5,2,1},c=0,count=0;
	printf("Enter the value: ");
	scanf("%d",&value);
	while(value>0)
	{
		if(value>=money[c])
		{
			printf("%d ",money[c]);
			count++;
			value-=money[c];
		}
		else
		{
			c++;
		}
	}
	printf("\nNumber of notes= %d\n",count);
	return 0;
}
