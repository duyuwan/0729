#incliude<stdio.h>


int main()
{
	 int a = 0,b = 0,r = 0;
	 int i = 0;


	printf("enter two number:\n");
	scanf("%d %d",&a,&b);



	if( b > a )
	{
	 r=a;
	 a=b;
	 b=r;
	}


	i=b;


	while(i % a != 0)
	{
	i = i + b;
	}



	printf("最小公倍数是:%d \n",i);




	while(b != 0)
       {
	    r = a % b;
	    a = b;
	    b = r;
	}



	printf("最大公约数:%d\n",a);

	return 0;
}


