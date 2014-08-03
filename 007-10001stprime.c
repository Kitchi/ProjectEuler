#include <stdio.h>
#include <stdlib.h>

void checkPrime(size_t *primeList, size_t num, size_t nprime, size_t *isprime_f)
{
   size_t nn;

   for(nn = 0; nn < nprime; nn++) {
      if(num % primeList[nn] == 0) {
         *isprime_f = 0;
         break;
      }
      else
         *isprime_f = 1;
   }
}

int main()
{
   size_t primeList[10001], num, nprime = 0, isprime_f = 0;

   primeList[0] = 2;
   nprime       = 1;

   num = 2;
   while(1) {
      checkPrime(primeList, num, nprime, &isprime_f);
      if (isprime_f) {
         primeList[nprime] = num;
         nprime++;
      }
      num ++;
      if (nprime == 10001)
         break;
   }
   printf("%zu\n", primeList[nprime-1]);
   return 0;
}
