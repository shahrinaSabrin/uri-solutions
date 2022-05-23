#include <stdio.h>
int main()
{
   int length;
   scanf("%d",&length);

   //array decleration
   int array[length];

    //scan the elements of array
   for (int c = 0; c < length; c++)
      scanf("%d ", &array[c]);

   // the location where you wish to delete element
   int position;
   scanf("%d", &position);

   
   //element deletion
      for (int c = position - 1; c < length - 1; c++)
         array[c] = array[c+1];

     
//execute final array
      for (int c = 0; c < length - 1; c++)
         printf("%d ", array[c]);
   

   return 0;
}