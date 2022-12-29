#include "stdio.h"

int main()
{
	int day, month;
	float heat;
	printf("Please enter the date (dd mm yy) and heat:");
	scanf("%d %d %f", &day, &month, &heat);
	
	printf("The date is: %d/%d and wheather: %.2f C",day,month,heat);
	return 0;
}
