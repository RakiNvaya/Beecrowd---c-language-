#include<stdio.h>
int main()
{
    //n,n1   =  start and ending day
    //h,m,s ...h1,m1,s1....start and end time

    int n,n1,n2,h1,h,m1,m,s,s1;
    char a[3],b[3];


        scanf("%s%d",&a,&n);
        scanf("%d%d%d",&h,&m,&s);
        scanf("%s%d",&b,&n1);
        scanf("%d%d%d",&h1,&m1,&s1);

     n2=n1-n;

     //total time in seconds
    int t=h*3600+m*60+s;
    int t1=h1*3600+m1*60+s1+n2*24*3600;


     int t2=t1-t;
        printf("%d dia(s)\n",t2/86400);
        t2=t2%86400;

        printf("%d hora(s)\n",t2/3600);
        t2=t2%3600;

        printf("%d minuto(s)\n",t2/60);
        t2=t2%60;

        printf("%d segundo(s)\n",t2);

     return 0;

     }
