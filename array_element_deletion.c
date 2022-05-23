
//ELEMENT DELETION FROM ARRAY

#include <stdio.h>
int main()
{
   int length,position;
   scanf("%d",&length);

   //array decleration
   int array[length];

    //scan the elements of array
   for (int a = 0; a < length; a++)
      scanf("%d ", &array[a]);

  
   int delete_num;
   scanf("%d", &delete_num);

//number deletion
   int j=0;
   while(j<length){
      if(array[j]==delete_num)
      {
         if(j<(length-1))
         {
            for(int k=j;k<(length-1);k++)
            {
               array[k]=array[k+1];
            }
         }
       length--;
    }
    else 
   j++;
}     
//execute final array
      for (int d = 0; d < length; d++)
         printf("%d ", array[d]);
   

   return 0;
}