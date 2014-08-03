#include <stdio.h>

void main()
{
   unsigned int n1=1,n2=2, next=0, sum=2;

   do{
      next = n1+n2;
      n1 = n2;
      n2 = next;
      if(next % 2 == 0)
         sum += next;
   } while(next <= 4E6);

   printf("% 5d\n", sum);

   return;
}
