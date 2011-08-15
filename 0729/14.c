#include<stdio.h>

int min(int a; int b)
{	if(a < b)
	return a;
	else 
	return b;
}



int main()
{

	int a = 12,b = 34;
	int i;
	for(i = 1; i < min(a, b); i++)
	{
	if(i%a == 0 && i % b == 0)
	printf("gongbeishu:%d\n",i);
	break;
	}

	return 0;
}
