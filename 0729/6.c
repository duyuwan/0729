/*求出100以内能被3 整除的数的个数，并打印输出这些数*/


#include<stdio.h>


int main()
{
	int i = 0;
	int j = 0;
	for(i = 1; i <= 100; i++)
	{	if(i % 3 == 0)
		{
		printf("%d   ",i);
		j++;
		}
		if(j % 8 == 0)
		printf("\n");
	}


	printf("\n");
	return 0;
}
