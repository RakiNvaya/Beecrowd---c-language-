#include<stdio.h>
int main()
{
    int n,a,ctotal =0,stotal=0,rtotal=0;
    char b;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%s",&a,&b);
        if(b=='C')
        {
            ctotal+=a;
        }
        else if(b=='R')
        {
            rtotal+=a;
        }
        else
        {
                stotal+=a;
        }
    }
    printf("Total: %d cobaias\n",ctotal+rtotal+stotal);
     printf("Total: %d coelhos\n",ctotal);
      printf("Total: %d ratos\n",rtotal);
       printf("Total: %d sapos\n",stotal);

       return 0;
}
