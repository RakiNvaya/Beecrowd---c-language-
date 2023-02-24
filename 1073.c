#include<stdio.h>
int main()
{
    int n,s=2;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)
    {
        printf("%d^%d = %d\n",i,s,i*i);
    }
    return 0;
}
