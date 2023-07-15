#include <stdio.h>

void r(){
	float f;
	
	printf ("Разрядность некоторых типов в си:\n");
	printf("Char = %d\n", (int)sizeof(char));
	printf("Int = %d\n", sizeof(int));
	printf("Long = %d\n", (int)sizeof(long));
	printf ("Float = %d\n", (int)sizeof(f));
	printf("Double = %d\n", (int)sizeof(double));
	printf("Long Double = %d\n", (int)sizeof(long double));
}

void Float(){
	float var = 0.0f, last = -1.0f;
	while (var != last) {
    	last = var;
    	var += 1.0f;
    	printf("%f\n", var);
    }
}

int main (void)
{
	setlocale(0, "rus");
	//r();
	Float();

	getchar ();
	return 0;
}
