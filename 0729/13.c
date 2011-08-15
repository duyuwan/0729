#include<stdio.h>

void sort(int *p1,int  *p2)
{	int n;
	if(*p1 < *p2)
	{
		n = *p1;
		*p1 = *p2;
		*p2 = n;
	}
}

int gongbeishu(int a, int b)

{
	int i = 0;
	sort(&a, &b);
	/*a > b*/
	i = b;
	while(i % a != 0)
	{i = i + b;}

	return i;
}



int gongyueshu(int a, int b)
{
	int n;
	sort(&a, &b);	
	while(b != 0)
	{n = a % b;
	 a = b;
	 b = n;
	}
	return a;
}

int main()
{
	int a = 0;
	int b = 0;


	printf("enter two number :");

	scanf("%d %d",&a, &b);



	printf("最大公约数:%d\n",gongyueshu(a,b));
	printf("最小公倍数:%d\n",gongbeishu(a,b));

	return 0;
}
