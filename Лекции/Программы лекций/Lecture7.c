#include <stdio.h>

int main(void)
{
	setlocale(0, "rus");
	
	sum(0, 0, 10);
	swich();
	
	return 0;	
}

int sum(int a, int b, int c) 
{
	int i;
	int i1;

	for(i = 1; i <= c; i++)
	{
		a = a + i;
		printf("Сумма А = %d\n",a);
	}
	
	printf("------------------------------------------\nСумма всех чисел от 1 до 10: %d\n\n",a);

	for(i1 = 1; i1 <= c/2; i1++)
	{
		b = b + i1;
		b = b + (c/2 + i1);
		printf("Сумма B = %d\n",b);
	}

	printf("------------------------------------------\nСумма всех чисел от 1 до 10: %d\n",b);
	
	return 0;
}

int swich()
{
	int a;
	printf("Введите число меньше 5: ");
	scanf("%d", &a);
	
	switch(a){
		case 1:
			printf("Первый.");
			break;
		case 2: 
			printf("Второй.");
			break;
		case 3:
		case 4:
		case 5:
			printf("Либо три, либо четыре, либо пять.");
			break;
		default:
			printf("Значение больше 5!");
			break;
	} 
}
