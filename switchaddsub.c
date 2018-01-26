//Write a c program to creat a calculator that perform all the basic arithmetic operation
#include <stdio.h>
int main(void) {
	int a,b;
	char ch;
	scanf("%d%d",&a,&b);
	scanf("%c",&ch);
	switch(ch)
	{
		case'+':
			printf("%d",a+b);
			break;
		case'-':
			printf("%d",a-b);
			break;
		case'*':
			printf("%d",a*b);
			break;
		default:
			printf("default condition");
		
	}
	return 0;
}
