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
		printf("����� � = %d\n",a);
	}
	
	printf("------------------------------------------\n����� ���� ����� �� 1 �� 10: %d\n\n",a);

	for(i1 = 1; i1 <= c/2; i1++)
	{
		b = b + i1;
		b = b + (c/2 + i1);
		printf("����� B = %d\n",b);
	}

	printf("------------------------------------------\n����� ���� ����� �� 1 �� 10: %d\n",b);
	
	return 0;
}

int swich()
{
	int a;
	printf("������� ����� ������ 5: ");
	scanf("%d", &a);
	
	switch(a){
		case 1:
			printf("������.");
			break;
		case 2: 
			printf("������.");
			break;
		case 3:
		case 4:
		case 5:
			printf("���� ���, ���� ������, ���� ����.");
			break;
		default:
			printf("�������� ������ 5!");
			break;
	} 
}
