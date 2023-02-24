#include<stdio.h>
int main()
{
    int n,num,in = 0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(10<=num && num<=20)
        {
            in++;
        }

    }
    printf("%d in\n",in);
    printf("%d out\n",n-in);

    return 0;
}
