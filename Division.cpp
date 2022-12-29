#include "stdio.h"

int main()
{
	int a = 5, b = 3, c;
	float e;
	
	e = 2.0;
	float d;
	
	c = (float)a / b;
	d = ((float)a / b + c);
	
	printf("%d/%d=%d\n",a,b,c);
	printf("%d/%d=%f\n",a,b,(float)c);
	printf("%d/%d=%f\n",a,b,d);
	printf("e=%f\n",e);
	printf("%.2f/%.2f=%f\n",(float)a,(float)b,d);
	
	return 0;
}
