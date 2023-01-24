#include<stdio.h>
int main()
{
  int n;
    scanf("%d",&n);
    printf("%d:",n/3600);
  int a=n%3600;
    printf("%d:",a/60);
  int b=a%60;
    printf("%d\n",b);
      return 0;

}
