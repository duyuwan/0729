/*用函数实现求最大公约数*/

#include<stdio.h>

int main()
{

	int a = 0, b = 0;
	int i;
	int s = 0;
	printf("enter a ,b:");

	scanf("%d %d",&a, &b);
	for(i = 1; i <= b; i++)
	{
		if(a % i == 0 && b % i == 0)
		s = i;
	}

	printf("s = %d\n",s);



	return 0;
}
