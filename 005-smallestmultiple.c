#include <stdio.h>
#include <stdlib.h>

int main()
{
   int divno = 20;
   int nlist[20],ii;
   int flag;

   for(ii = 0; ii < 20; ii++)
      nlist[ii] = ii+1;

   while (divno) {
      for(ii = 0; ii < 20; ii++) {
         if(divno % nlist[ii] == 0)
            flag = 0;
         else {
            flag = 1;
            divno ++;
            ii = 0;
         }
      }
      if (flag == 0)
         break;
   }
   printf("% d\n", divno);
   return 0;
}
