#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
   //unsigned long           n = 600851475143;
   //unsigned int            div = 2, lprime, tmpvar, ii;
   //unsigned int            isprime = 0, maxp=0;
   long           n = 600851475143;
   int            div = 2, lprime, tmpvar, ii;
   int            isprime = 0, maxp=0;

   while (n > 1) {
      while (n % div != 0) {
         div++;
      }
      n     /= div;
      tmpvar = floor(div/2);
      for(ii = 2; ii < tmpvar; ii++) {
         if(div % ii == 0)
            isprime = 0;
         else
            isprime = 1;
      }
      if (isprime) {
         if (div > maxp)
            maxp = div;
      }
      div = 2;
   }

   printf("% 5d\n", maxp);

   return;
}
