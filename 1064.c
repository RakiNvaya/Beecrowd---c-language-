#include<stdio.h>
int main()
{
    double num[6],sum=0;
    int count=0;

    for(int i=0;i<6;i++)
    {
      scanf("%lf",&num[i]);
      if(num[i]>0)
      {
          sum=sum+num[i];
          count++;
      }
    }
    double avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);
    return 0;
}
