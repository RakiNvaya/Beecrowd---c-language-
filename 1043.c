#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double d=(a+b+c)/2;


    if(d!=a && d!=b && d!=c )
    {
        printf("Perimetro = %.1lf",a+b+c);
    }
    else
    {
        double f=((a+b)/2)*c;
        printf("Area =  %.1lf",f);
    }


    return 0;
}
