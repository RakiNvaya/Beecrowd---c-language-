#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    double x1=sqrt(pow(b,2)-(4*a*c));

    double n1=(-b+x1)/(2*a);
    double n2=(-b-x1)/(2*a);



    if(a!=0 || (pow(b,2)-4*a*c)<0)
    {
        printf("R1 = %.5lf\n",n1);
        printf("R2 = %.5lf\n",n2);

    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
