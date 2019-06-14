
#include <stdio.h>
#include <stdlib.h>
#include  <math.h>
// DICKY IBROHIM
int fungctionpow (int hasil_loop);
int fungctionfactorial (int hasil_loop2);
int main()
{   int loop1, loop2, result, input;
    int hasil=1;
printf ("Input Many Number= ");
scanf ("%d", &input);
   for (loop1=1;loop1<=input;loop1++)
   {
      result= fungctionpow (loop1);
       printf ("%d ", result);
   }


 printf ("\n ");

//
 for (loop2=0;loop2<=input-1;loop2++)
{
fungctionfactorial (loop2);
printf ("%d ", hasil);
}

return 0;
}

//FUNGSI 2
int fungctionpow (int hasil_loop)
{   int result1;
    result1= pow (2,hasil_loop)+1;
    return result1;
}

int fungctionfactorial (int hasil_loop2)
{ int hasil=1;
    return (hasil*=hasil_loop2+1);
}


