#include "stdio.h"

int main()
{
	int a;
	char c;
	printf("Please enter a character: ");
	scanf("%c",&c);
	a = c+32;
		
	printf("character c: %c and its number: %d and assigned: %d\n",c,c,a);
	printf("character a: %c and its number: %d \n",a,a);
	printf("The number is in scientific notation: %E\n",a);
	printf("The number is in hex: 0x%x\n",a);
	printf("The number is in oct: ox%o ",a);
	return 0;
}
