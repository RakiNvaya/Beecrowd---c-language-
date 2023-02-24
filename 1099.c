#include<stdio.h>
int main()
{
    int n,a,b,t;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
       {
        scanf("%d%d",&a,&b);

        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        int sum=0;
        for(int i=a+1;i<b;i++)
          {
            if(i%2!= 0)
              {
                 sum += i;
              }
          }

        printf("%d\n",sum);



    }
    return 0;

}
