#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int n = 0;

	scanf("%d %d",&a, &b);

	if(a < b)
	{i = a; 
	 a = b;
	 b = i;
	}

	/*a>b*/

	for(n = b; n % a != 0; )
	{n = n + b;
	}	


	printf("    %d \n",n);
	return 0;
}
