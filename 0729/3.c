/*求数值的绝对值*/

#include<stdio.h>

int main()
{
	float a = 0;
	printf("enter a:");
	scanf("%f",&a);


	if(a < 0)
	printf("|a| = %f\n",-a);
	else
	printf("|a| = %f\n",a);



	return 0;
}
