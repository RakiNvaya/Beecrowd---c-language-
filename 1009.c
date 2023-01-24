#include<stdio.h>
int main()
{
    char s;
    scanf("%s",&s);

    double a,b;
    scanf("%lf%lf",&a,&b);

    printf("TOTAL = R$ %.2lf\n",(b*15)/100+a );
    return 0;

}
