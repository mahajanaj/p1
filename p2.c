
#include <stdio.h>

int main()
{
   int array[10] = {1, 2, 3, 4, 5};
   int sum, i;

   sum = 0;

   for( i= 5; i >= 0; i--) {
      sum = sum + array[i];
   }

   printf("Sum of array is %d.", sum);

   return 0;
}
