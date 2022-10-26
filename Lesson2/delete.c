#include <stdio.h>

int main()
{
   int array [] = {1,2,3,4,5};
   int i, j;
   int n = 5;
   int k =2;

   printf("The value of the original array : \n");

   for (i = 0; i < n; i++)
   {
    printf("array[%d] = %d \n", i, array[i]);
   }

   j = k;
   while ( j < n)
   {
    array[j -1] = array[j];
    j = j + 1;
   }

   n = n -1;

   printf("The value of the new deleted array: -\n");

   for (i = 0; i < n; i++)
   {
    printf(" array[%d] = %d \n", i, array[i]);
   }
}