#include<stdio.h>
int main()
{
    int j=60,;
    for(int i=1;i<=60;i += 3)
    {

         if(j==0)
        {
            break;
        }
        else
        {
            j -= 5;
            printf("I=%d J=%d\n",i,j);
         }
    return 0;

    }
