/*编程实现对键盘输入的英文句子进行加密，加密方法为，当内容为英文字母时其在26字母中的其后三个字母代替该字母，若为其它字符则不改变*/


#include<stdio.h>
int main()
{		
	char c;
	while((c = getchar()) != '\n')
	{
	if((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		c = c + 3;

	if((c < 'z'+3 && c > 'z') || (c < 'Z'+3 && c > 'Z'))
	c = c - 26;

	putchar(c);
	}


	
	return 0;
}
