#include<stdio.h>
#include<math.h>
double  main()
{
 double a;
 scanf("%lf",&a);

    printf("NOTAS:\n");


      printf("%d nota(s) de R$ 100,00\n",a/100);
      double b=fmod(a,100);

      printf("%d nota(s) de R$ 50,00\n",b/50);
    int c=fmod(b,50);
      printf("%d nota(s) de R$ 20,00\n",c/20);
    int  d=fmod(c,20);
      printf("%d nota(s) de R$ 10,00\n",d/10);
    int  e=fmod(d,10);
      printf("%d nota(s) de R$ 5,00\n",e/5);
    int  f=fmod(e,5);
      printf("%d nota(s) de R$ 2,00\n",f/2);
    int  g=fmod(f,2);


    printf("MOEDAS:\n");


    int  m1=fmod(g,1);
     printf("%d nota(s) de R$ 1.00\n",m1/2);
    int  m2=fmod(m1,.5);
     printf("%d nota(s) de R$ 0.50\n",m2/2);
    int  m3=fmod(m2,.25);
     printf("%d nota(s) de R$ 0.25\n",m3/2);
    int  m4=fmod(m3,.10);
     printf("%d nota(s) de R$ 0.10\n",m4/2);
    int  m5=fmod(m4,.05);
     printf("%d nota(s) de R$ 0.05\n",m5/2);
    int  m6=fmod(m5,.01);
     printf("%d nota(s) de R$ 0.01\n",m6/2);


    return 0;



}
