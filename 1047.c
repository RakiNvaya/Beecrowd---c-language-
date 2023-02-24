#include<stdio.h>
int main()
{
    //a,a1 hour ....b,b1 minute9
    int a,b,a1,b1,hour,min;
    scanf("%d%d%d%d",&a,&b,&a1,&b1);
        if(a<=a1)
    {
        hour=a1-a;
        if(b1>=b)
        {
            min=b1-b;
        }
        else
        {
            min=60-b+b1;
            hour-=1;
        }
    }
    else
    {
        hour=24-a+a1;
        if(b1>=b)
        {
            min=b1-b;
        }
        else
        {
            min=60-b+b1;
            hour-=1;
        }

    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    return 0;


}
