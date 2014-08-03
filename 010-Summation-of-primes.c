#include <stdio.h>

int main(int argc, const char *argv[])
{
   unsigned int   list[2000000]={0}, ii, jj;

   unsigned int   sum = 0;

   for(ii = 2; ii < 2000000; ii++){
      if(list[ii] == 0){ /* If prime */
         sum += ii;
         for(jj = ii; jj < 2000000; jj+=ii) /* Kill all multiples */
            list[jj] = 1;
      }
   }

   printf("% d % d\n", ii, sum);
   return 0;
}
