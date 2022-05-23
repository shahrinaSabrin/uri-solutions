#include <stdio.h>
 
int main() {
 int t,n,c;
 double sum=0,tc=0,result;
 scanf("%d",&t);
 while(t--){
     
     scanf("%d %d",&n,&c);
     sum+=n*c;
     tc+=c;
     
 }
 result=(double)sum/(tc*100);
 printf("%.4lf\n",result);
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    return 0;
}