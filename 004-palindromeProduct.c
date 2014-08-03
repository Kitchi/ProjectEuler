#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
   int      n1=999, n2=999;
   int      prod = 0, nd, ispal=0,allclear=0, ii;
   int      maxpal=0, paln1, paln2;

   char     numstr[100],len;

   
   for(n1 = 999; n1 > 100; n1--) {
      for(n2 = n1; n2 > 100; n2--) {
         allclear = 0;
         ispal    = 0;
         prod = n1*n2;
         sprintf(numstr, "%d", prod);
         len = strlen(numstr);
         for(ii = 0; ii < len; ii++){
            if(numstr[ii] == numstr[len-1-ii])
               allclear = 1;
            else {
               allclear = 0;
               ii = len;
            }
         }
         if (allclear == 1)
            ispal = 1;
         else
            ispal = 0;
         if (ispal) {
            if(prod > maxpal){
               maxpal = prod;
               paln1 = n1;
               paln2 = n2;
            }
         }
      }
   }
   printf("%d\n", maxpal);
   printf("%d %d\n", paln1, paln2);
   return;
}
