#include<stdio.h>
int main()
{
    int a,b,c,small;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
      {
        printf("%d\n",a);
        small =a;
         if(c>small && c<b)
         {
             printf("%d\n%d\n\n",c,b);
         }
         else
         {
           printf("%d\n%d\n\n",b,c);
         }
      }
     else if(b<a && b<c)
      {
        printf("%d\n",b);
        small =b;
         if(a>small && a<c)
        {
           printf("%d\n%d\n\n",a,c);
        }
         else
        {
           printf("%d\n%d\n\n",c,a);
        }

    }
    else if(c<a && c<b)
       {
         printf("%d\n",c);
         small = c;
        if(b>small && b<a)
         {
           printf("%d\n%d\n\n",b,a);
         }
         else
        {
           printf("%d\n%d\n\n",a,b);
        }
    }



   printf("%d\n%d\n%d\n",a,b,c);
   return 0;

}
