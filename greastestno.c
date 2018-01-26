//Find the greatest of three number using else if ladder
#include <stdio.h>

int main(void) {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is greater",a);
	}
	else if(b>c)
	{
		printf("%d is greater",b);
	}
	else if(c>b)
	{
		printf("%d is greater",c);
	}
	else
	{
		printf("All the numbers are equal");
	}
	
	// your code goes here
	return 0;
}
