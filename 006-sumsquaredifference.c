#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   unsigned int n = 1, sumsq = 0, sqsum = 0;

   for(n = 1; n <= 100; n++){
      sumsq += n*n;
      sqsum += n;
   }

   sqsum *= sqsum;

   printf("% d\n", sqsum - sumsq);

   return 0;
}
