#include <stdio.h>

int main ()
{
	int number ;
	int * pointerNumber = &number;

	printf("Direccion de memoria de la variable number: %p\n", &pointerNumber );
	printf("the value of the varible is : %d y direccion es : %p\n", *pointerNumber, pointerNumber);
}
