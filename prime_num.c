#include<stdio.h>
 
int main()
{
    int i,j,n,flag;
    
    printf("Enter the number till which you want prime numbers\n");
    scanf("%d",&n);
    
    printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
         
       if(flag==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
