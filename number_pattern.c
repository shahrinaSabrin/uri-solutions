#include <stdio.h>
int main()
{
  int col,row,i,space;

  scanf("%d",&col);
  for(row=1; row<=col; row++)
  {


    for(int space=1; space<=col-row; space++)
    {
    printf(" ");
    }

    for(i=1; i<=row; i++)
    {
      printf("* ");

    }

    printf("\n");
  }


  for(row=col-1; row>=1; row--)
  {


    for(space=col-row; space>=1; space--)
    {
    printf(" ");
    }

    for(i=row; i>=1; i--)
    {
      printf("* ");

    }

    printf("\n");
  }
  return 0;
}

