/*输入一行字符，分别统计出其中英文字母，空格，数字和其他字符的个数.*/
#include<stdio.h>

int main()
{
	int letter = 0, blank = 0, digit = 0, other = 0;
	char c;

	while((c = getchar( )) != '\n')
	{
	if((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
	letter++;
        else if(c == ' ')
	blank++;
	else if(c >= '0' && c <= '9')
	digit++;
	else 
	other++;
	}




	printf("letter = %d,blank = %d,digit = %d,other = %d\n",letter, blank, digit, other);
	return 0;
}
