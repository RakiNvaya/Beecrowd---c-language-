#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
    printf("%d ano(s)\n",n/365);
   int a=n%365;
    printf("%d mes(es)\n",a/30);
   int b=a%30;
    printf("%d dia(s)\n",b);
    return 0;

}
