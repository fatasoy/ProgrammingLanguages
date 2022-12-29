#include "stdio.h"

int main()
{
	char *str = "hello!.";
	printf("%s\n",str);
	//str[0] = 'H';	
	//printf("%s\n",str);
	
	printf("Enter two strings with spaces:");
	char str1[256];
	char str2[256];
	scanf("%s",str1);
	scanf("%s",str2);
	printf("First string: %s\n",str1);
	printf("Second string: %s\n",str2);
	
	//getchar();
	fflush(stdin);
	
	printf("Enter same strings again:");
	gets(str1);
	printf("First string:");
	puts(str1);
	printf("First string:%s\n",str1);
	printf("Second string:");
	puts(str2);
	
	return 0;
}
