#include <stdio.h>

int main(void) {
	int a;
	printf("if follow the rules press 1 else press 0\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("dont have a license:fine amount 1000\n ");
		printf("dont have a insurance:fine amount 500\n");
		printf("dont have a RCbook:fine amount 700\n");
		printf("dont have a helmet:fine amount 400\n");
		printf("if speed is high:fine amount 350\n");
		printf("if travel two or more person:fine amount 300");
	}
	else
	{
		printf("congrats");
	}
	return 0;
}
