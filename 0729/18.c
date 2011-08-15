/*冒泡排序，实现从小到大排列。*/

#include<stdio.h>

int main()
{
	int a[] = {1,2,3,7,35,43,66,5,55,4};
	int i, j,k;
	int t;

	for(i = 0; i < 10; i++)
	{
	printf("%d  ",a[i]);
	}

	printf("\n");
	
	for(i= 0; i < 10;i++)
	{
	k = i;
	for(j = i+1; j < 10;j++)
	{

	if(a[j]>a[k])
	{t = a[j];
	a[j] = a[k];
	a[k] = t;}
	}

	}


	for(i = 0; i < 10; i++)
	{
	printf("%d  ",a[i]);
	}


	printf("\n");

	return 0;
}
