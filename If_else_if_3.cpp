/*Programming Languages 1 If-else if-else structure example 3*/

#include "stdio.h"

int main()
{
	int grade;
	printf("Enter a grade value: ");
	scanf("%d",&grade);
	
	if(grade>=0 && grade<=100)
	{
		if (grade>=95)
			printf("Passed. Grade: A\n");
		else if (grade>=85)
			printf("Passed. Grade: A+\n");
		else if (grade>=80)
			printf("Passed. Grade: A-\n");
		else if (grade>=75)
			printf("Passed. Grade: B+\n");
		else if (grade>=70)
			printf("Passed. Grade: B-\n");
		else if (grade>=55)
			printf("Passed. Grade: C\n");
		else
			printf("Failed !.\a\n");
	}
	else
		printf("Non-Valid grade!.");
	return 0;
}
