/*求1+2+3+...99的和*/

#include<stdio.h>

int main()
{
	int i = 0;
	int s = 0;

	for(i = 0; i < 100; i++)
	s = s + i;
	printf("s = %d\n",s);


	return 0;
}
