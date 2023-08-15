#include <stdio.h>

int a = 15;

int func(void)
{
	printf("Global a = %d\n", a);
	return 0;
}

int main(void)
{
	int a = 10;
	{
		int a = 20; 
	}
	printf("Main a = %d\n", a);
	func();
	return 0;
}
