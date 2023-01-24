#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
  int k=(a+b+abs(a-b))/2;
  if(k>c)
   printf("%d eh o maior",k);
   else
     printf("%d eh o maior",c);

   return 0;
}
