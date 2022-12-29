#include "stdio.h"

int main()
{
	char cArray[10];
	char str[11];
	for(int i=0;i<10;i++)
		{
			cArray[i] = '0'+i; //We used '0' because I want to store numbers
			str[i] = '0'+i;    // as character
			
		}
	str[10] = '\0';
	for(int i=0;i<10;i++)
	{
		printf("%c ",cArray[i]);
	}
		
	
	printf("\nstr: %s\n",str);
	puts(str);
	printf("\nCarray:%s",cArray);
	
	return 0;
}
