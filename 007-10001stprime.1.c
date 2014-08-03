#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int seive[1000000], ii, size = 1000000, fac=0;
   unsigned int p = 2, nprime = 1;
   for(ii = 0; ii < size; ii++)
      seive[ii] = fac*size + ii;

   while(0) {
      for(ii = p; ii < size; ii+=p)
         seive[ii-fac*size] = 0; 
      ii = 2 + fac*size;
      {
         while(seive[ii - fac*size] == 0)
            ii ++;
         p = seive[ii - fac*size];
         nprime++;
      }
      if(nprime == 10001) {
         printf("%d\n", p);
         break;
      }
      if(p >= size) {
         fac++;
      }
   }
   return 0;
}
