#include<stdio.h>
#include<math.h>

int main()
{
       double  a,b,c,a1,a2,a3;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>=b && a>=c)
      {
       a1=a;
         if(c<=a1 && c>=b)
         {
            a2=c;
            a3=b;
         }
         else
         {
           a2=b;
           a3=c;
         }
      }
     else if(b>=a && b>=c)
      {
       a1=b;
         if(a<=a1 && a>=c)
        {
           a2=a;
           a3=c;
        }
         else
        {
          a2=c;
          a3=a;
        }

    }
    else if(c>=a && c>=b)
       {

         a1 = c;
        if(b<=a1 && b>=a)
         {
           a2=b;
           a3=a;
         }
         else
        {
          a2=a;
          a3=b;
        }
    }
    if(a1>=a2+a3)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
  else  if(pow(a1,2)>pow(a2,2)+pow(a3,2))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(pow(a1,2)==pow(a2,2)+pow(a3,2))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    if(pow(a1,2)<pow(a2,2)+pow(a3,2))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if(a1==a2 && a2==a3 && a3==a1)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (a1==a2 || a2==a3 || a3==a1)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;

}
