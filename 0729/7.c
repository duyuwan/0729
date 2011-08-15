/*把560分钟表示成小时和分钟*/

#include<stdio.h>

int main()
{
	int time = 560;
	printf("%d 转换成时间是%d:%d\n",time, time /60, time % 60);



	return 0;
}
