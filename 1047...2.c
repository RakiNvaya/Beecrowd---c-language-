
#include<stdio.h>
int main()
{
    //a,a1 hour ....b,b1 minute9
    int a,b,a1,b1,min1,min2,min3,min,hour;

    scanf("%d%d%d%d",&a,&b,&a1,&b1);
     min1 = a*60+b;
     min2 = a1*60+b1;
     if(min2>min1)
     {
         min3=min2-min1;
         if(min3>=60)
         {
            hour=min3/60.0;
            min=min3%60;
         }
         else
         {
             hour=0;
            min=min3;
         }


     }
     else if(min1>min2)
     {
         min3=1440-min1+min2;
        if(min3>=60)
       {
          hour=min3/60;
          min=min3%60;

       }
       else
       {
          hour=0;
          min=min3;
       }
     }
    else
    {
        hour=24;
        min=0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
    return 0;
    }
