#include<stdio.h>
int main()
{
    int n[100],large=0 ,position;
    for(int i=1;i<=100;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]>large)
        {
             large = n[i];
             position=i;
        }

    }
    printf("%d\n%d\n",large ,position);
    return 0;
}
