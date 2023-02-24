#include<stdio.h>
int main()
{
    double a,total;
    scanf("%lf",&a);
    if(a>=0 && a<=400)
    {
        total=a*.15;
        a=a+total;
        printf("Novo salario: %.2lf\n",a);
        printf("Reajuste ganho: %.2lf\n",total);
        printf("Em percentual: 15 %%\n");
    }
     else if(a>400 && a<=800)
    {
        total=a*.12;
        a=a+total;
        printf("Novo salario: %.2lf\n",a);
        printf("Reajuste ganho: %.2lf\n",total);
        printf("Em percentual: 12 %%\n");
    }
    else  if(a>800 && a<=1200.0)
    {
        total=a*.10;
        a=a+total;
        printf("Novo salario: %.2lf\n",a);
        printf("Reajuste ganho: %.2lf\n",total);
        printf("Em percentual: 10 %%\n");
    }
    else  if(a>1200 && a<=2000.0)
    {
        total=a*.07;
        a=a+total;
        printf("Novo salario: %.2lf\n",a);
        printf("Reajuste ganho:  %.2lf\n",total);
        printf("Em percentual: 7 %%\n");
    }
    else  if(a>2000)
    {
        total=a*.04;
        a=a+total;
        printf("Novo salario: %.2lf\n",a);
        printf("Reajuste ganho: %.2lf\n",total);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
