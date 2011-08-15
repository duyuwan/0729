/*打印下面的形状
* * * *

* * * *

* * * *

* * * *
使用for循环


*
* * *
* * * * *
* * * * * * *
for循环的嵌套调用*/



#include<stdio.h>

int main()
{

	int i = 0;
	int j = 0;

	for(i = 0; i < 4; i++)
	printf("****\n\n");

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j <= i; j++)
		printf("*");
	printf("\n");
	}




	return 0;
}
