#include <stdio.h>

void ByteOperation(int a, int b){
	printf("0%o & 0%o = 0%o\n", a, b, a & b);
	printf("0%o | 0%o = 0%o\n", a, b, a | b);
	printf("0%o ^ 0%o = 0%o\n", a, b, a ^ b);
	printf("0%o << 2 = 0%o\n", a, a << 2);
	printf("0%o >> 2 = 0%o\n", a, a >> 2);
	printf("~0%o = 0%o\n", a, ~a); 	
}

void ByteShift(){
	int a = 0xDDCCBBAA;
	unsigned char c;
	
	c = (a & 0x000000FF);
	printf("First byte of A = %x\n", c);
	c = ((a >> 8) & 0xFF);
	printf("Second byte of A = %x\n", c);
	c = ((a >> 16) & 0xFF);
	printf("Third byte of A = %x\n", c); 
	c = ((a >> 24) & 0xFF);
	printf("Four byte of A = %x\n", c);
	
	c = ((a & 0x0000FF00) >> 8);
	printf("[2 option] Second byte of A = %x\n", c); 
	c = ((a << 16) >> 24);
	printf("[3 option] Second byte of A = %x\n", c); 
}

void ByteChange(){
	int a = 0xDDCCBBAA;
	unsigned  char c;
	
	c = ((a & 0xFFFFFF00) | 0x000000EE);
	printf("Four byte of A = %x\n", c);
}

int main(void)
{
	int a = 05;
	int b = 07;
	
	ByteOperation(a, b);
	printf("____________________________\n");
	ByteShift();
	printf("____________________________\n");
	ByteChange();
	
	return 0;
}
