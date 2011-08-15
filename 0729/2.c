#include<stdio.h>

int main()
{

	float x = 0;
	float y = 0;

	printf("enter x:");
	scanf("%f",&x);

	if(x < 1)
	{
		y = x;
	}
	if(x > 10)
	{
		y = 3*x - 11;
	}
	else 
	{
		y = 2*x - 1;
	}


	printf("y = %f\n",y);

	return 0;
}
