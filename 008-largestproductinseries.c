#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Find the greatest product of five consecutive digits in the 1000-digit number
 * 73167176531330624919225119674426574742355349194934
   96983520312774506326239578318016984801869478851843
   85861560789112949495459501737958331952853208805511
   12540698747158523863050715693290963295227443043557
   66896648950445244523161731856403098711121722383113
   62229893423380308135336276614282806444486645238749
   30358907296290491560440772390713810515859307960866
   70172427121883998797908792274921901699720888093776
   65727333001053367881220235421809751254540594752243
   52584907711670556013604839586446706324415722155397
   53697817977846174064955149290862569321978468622482
   83972241375657056057490261407972968652414535100474
   82166370484403199890008895243450658541227588666881
   16427171479924442928230863465674813919123162824586
   17866458359124566529476545682848912883142607690042
   24219022671055626321111109370544217506941658960408
   07198403850962455444362981230987879927244284909188
   84580156166097919133875499200524063689912560717606
   05886116467109405077541002256983155200055935729725
   71636269561882670428252483600823257530420752963450
*/

int main()
{
   
   FILE       *ifp;
   int        jj, ii;
   int        prod = 1, maxprod = 1, num = 1;
   char       instr[1001], buf[5], buf2;

   ifp = fopen("jnk", "r");
   if (ifp == NULL) {
      fprintf(stderr, "Error opening file for reading.\n");
      exit(1);
   }

   rewind(ifp);

   fgets(instr, 1001, ifp);

   for(ii = 0; ii < 1001; ii ++) {
      memcpy(buf, instr+ii, 5); /* Get 5 char substring */
      prod = 1;
      for(jj = 0; jj < 5; jj++) { /* Sliding window of size 5 */
         memcpy(&buf2, buf+jj, 1);
         num  = (int) buf2 - '0';
         prod *= num;
      }
      if (prod > maxprod)
         maxprod = prod;
   }
   printf("%d\n", maxprod);

   fclose(ifp);

   return 0;
}