/*用switch语句实现加减乘除。*/


#include<stdio.h>

int main()
{

	char c;
	float a, b, result;	
	printf("enter your shizi :");
	scanf("%f %c %f",&a,&c,&b);


	switch(c)
	{
	case '+':result = a + b;break;
	case '-':result = a - b;break;
	case '*':result = a * b;break;
	case '/':result = a / b;break;
	default :printf("error!");
	}


	printf("%f %c %f = %f\n",a,c,b,result);

	return 0;
}
