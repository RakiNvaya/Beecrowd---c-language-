#include<stdio.h>
int main()
{
    double a,b,tax;
    scanf("%lf",&a);
    if(a>=0.0 && a<=2000.0)
    {
        printf("Isento\n");


    }
    else
    {
        if(a>=2000.01 && a<=3000.0)
        {
            b=a-2000.0;
           tax=b*.08;
            printf("R$ %.2lf\n",tax);

        }
         else if(a>=3000.01 && a<=4500.0)
        {
            b=a-3000;
          tax=(b*.18)+80;
           printf("R$ %.2lf\n",tax);
        }
       else  if(a>4500.0)
        {
            b=a-4500;
            tax=(b*0.28)+350;
            printf("R$ %.2lf\n",tax);

        }

    }

    return 0;
}
