/*编程实现将任意的十进制整数转换为R进制数（R在2-16之间）。*/


#include<stdio.h>
int main()
{
	int a,r,i=0,j;
	int b[20];
	scanf("%d %d",&a,&r);

	while(a/r != 0)
	{

	printf("%d",a%r);
	b[i] = a%r;
	i++;

	a = a / r;

	}

	printf("%d",a%r);
	b[i] = a%r;
	printf("\n");


	for( ;i >= 0;i--)
	{
	printf("%d",b[i]);
	}

	return 0;
}
