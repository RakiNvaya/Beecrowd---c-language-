#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    a=a-1;
   while (a>b)
    {
        if(a%2 != 0)
        {
            sum+=a;
        }
        a--;
    }

    printf("%d\n",sum);
    return 0;

}
