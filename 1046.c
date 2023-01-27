#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=b)
    {
        int c=24-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    return 0;
}
