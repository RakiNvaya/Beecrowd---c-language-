#include<stdio.h>
int  main()
{
int  a;
    scanf("%d",&a);
    printf("%d\n",a);
    int c=a%100;
    printf("%d nota(s) de R$ 100,00\n",a/100);

    int e=c%50;
    printf("%d nota(s) de R$ 50,00\n",c/50);

    int  g=e%20;
    printf("%d nota(s) de R$ 20,00\n",e/20);

    int  i=g%10;
    printf("%d nota(s) de R$ 10,00\n",g/10);

    int  k=i%5;
    printf("%d nota(s) de R$ 5,00\n",i/5);

    int  m=k%2;
    printf("%d nota(s) de R$ 2,00\n",k/2);

    int  o=m%1;
    printf("%d nota(s) de R$ 1,00\n",m/1);

    return 0;
}
