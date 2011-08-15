/*编写函数char *mystrcpy(char *dest, char *src);实现strcpy的功能*/


#include<stdio.h>
#include<string.h>
char *mystrcpy(char *str1, char *str2)
{

	int i = 0;
	for(i = 0; i < strlen(str2); i++)
	{
	str1[i] = str2[i];

	}

	str1[i] = '\0';
	return str1;
}


int main()
{
	char str1[] = "123wd",str2[] = "dsfdgvb";

	str1 =&mystrcpy(str1,str2);
	printf("%s\n",str1);
	printf("%s\n",&str2[0]);

	return 0;
}

