#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=n;i<n+20;i++)
    {
       if(count<6)
       {
            if(i%2 !=0)
        {
            printf("%d\n",i);
            count++;
        }
       }
    }
    return 0;
}

