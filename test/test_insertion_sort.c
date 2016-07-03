#include <stdio.h>
#include "insertion_sort.h"

int main(void)
{
   int a[6] = {5,2,4,6,1,3};
   insertion_sort(a, 6);
   int i;
   for(i=0; i<6; i++)
   {
       printf("a[%d] = %d \n", i, a[i]);
   }
   return 0;
}

