#include <stdio.h>
int main(void){
   char s[40];
   int  k = 0;

   /* read array */
   printf("Write something : ");
   gets(s);

   /* count character until terminator character */
   while( s[k]!='\0' )
       k++;
    printf("Array length : %d\n" ,k);

 return 0;
}

