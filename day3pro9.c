#include <stdio.h>

int main(void) {
	int a,b,c;
	printf(" BRAND STORIES\n");
	scanf("%d",&a);
	if(a>=500&&a<=1499)
	{
		b=a*(0.05);
		c=a-b;
		printf("Your amount is %d\n",c);
	}
		else if(a>=1500&&a<=2499)
	{
		b=a*(0.1);
		c=a-b;
		printf("Your amount is %d\n",c);
	}
		else if(a>=2500&&a<=3499)
	{
		b=a*(0.15);
		c=a-b;
		printf("Your amount is %d\n",c);
	}
		else if(a>=3500&&a<=4499)
	{
		b=a*(0.2);
		c=a-b;
		printf("Your amount is %d\n",c);
	}
		else if(a>=4999)
	{
		b=a*(0.5);
		c=a-b;
		printf("Your amount is %d\n",c);
	}
	    else
	    {
	    	printf("Your amount is %d\n",c);
	    }
	    printf("********THANK YOU VISIT AGAIN**********");
	return 0;
}
