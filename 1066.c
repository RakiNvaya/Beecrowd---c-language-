
#include<stdio.h>
int main()
{
    int num[5],even=0,odd=0,posi=0,neg=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]%2==0)
        {
            even++;
        }
        if(num[i]%2!=0)
        {
            odd++;
        }
        if(num[i]>0)
        {
            posi++;
        }
        if(num[i]<0)
        {
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
     printf("%d valor(es) impar(es)\n",odd);
      printf("%d valor(es) positivo(s)\n",posi);
       printf("%d valor(es) negativo(s)\n",neg);

       return 0;
}
