/*Programming Languages 1 If-else structure example 2*/

#include "stdio.h"

int main()
{
	int grade;
	printf("Enter a grade value: ");
	scanf("%d",&grade);
	
	if (grade>=45)
		{
			printf("Passed !.\n");
			printf("Congrats...");
		}
	else
		printf("Failed !.\a\n");
	return 0;
}
