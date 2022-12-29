#include <stdio.h>
int main(void){
   char s[40], temp;
   int  i, n;
   /* read array */
   printf("Write something : ");
   gets(s);
   /* until terminator character */
   for(n=0; s[n] != '\0'; n++);
  
   for(i=0; i<n/2; i++){
      temp = s[n-i-1];
      s[n-i-1] = s[i];
      s[i]     = temp;
   }
   printf("Reverse            : %s\n", s);
 return 0;
}

