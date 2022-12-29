/*Programming Languages 1 Switch-Case example*/

#include "stdio.h"

int main()
{
	int number_of_month;
	printf("Enter number of the month: ");
	scanf("%d",&number_of_month);
	
	switch(number_of_month)
	{
		case 12:
		case  1:
		case  2:
			printf("%d. month is winter.",number_of_month);
			break;
		case  3:
		case  4:
		case  5:
			printf("%d. month is spring.",number_of_month);
			break;
		case  6:
		case  7:
		case  8:
			printf("%d. month is summer.",number_of_month);
			break;
		case  9:
		case 10:
		case 11:
			printf("%d. month is autumn.",number_of_month);
			break;
		default:
			printf("Entered month number is not correct!.");
	}
		
	return 0;
}
