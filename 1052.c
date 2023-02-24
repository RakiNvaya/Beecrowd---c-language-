#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    char month[12][15]={"January","February","March",
                   "April","May","June","July",
                    "August","September","October",
                    "November","December"};

    printf("%s\n",month[a-1]);
     return 0;
}
