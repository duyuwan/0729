/*实现n!*/


#include<stdio.h>

int main()
{
	int i = 0;
	int s = 1;
	int n;


	printf("enter n:");
	scanf("%d",&n);

	for(i = 1; i <= n; i++)
	{
		s = s*i;
	}
	printf("n! = %d\n ",s);

	return 0;
}

