//Write a c program to find the second greatest of 3 number
#include <stdio.h>
	scanf("%d%d%d",&a,&b,&c);
	if((a>b&&a<c)||(a<b&&a>c))
	{

int main(void) {
	int a,b,c;
		printf("%d  is second greater number",a);
	}
	else if((b<a&&b>c)||(b>a||b<c))
	{
		printf("%d  is second greater number ",b);
	}
	else if((c>a&&c<b)||(c<a&&c>b))
	{
		printf("%d is second greater number ",c);
	}
	else
	{
		printf("All the numbers are equal");
	}
	
 	return 0;
}
