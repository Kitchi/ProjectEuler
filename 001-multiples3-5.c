#include <stdio.h>

void main()
{
   unsigned int n1=3,n2=5,n3=9, ii, sum=0;

   for(ii=0; ii < 1000; ii++){ 
      if(ii % n1 == 0 || ii % n2 == 0 || ii % n3 == 0)
         sum += ii;
   }
   printf("% 5d\n", sum);

   return;
}


