/*输入一个数，倒序输出一个数*/


#include<stdio.h>
#include<stdio.h>
int main()
{
	int input;
	int output;
	printf("give a input :");
	scanf("%d",&input);

	printf("%d",input % 10);
	while((input = input / 10) != 0)
	{
	printf("%d",input % 10);
	}
	
	printf("\n");
	return 0;
}
