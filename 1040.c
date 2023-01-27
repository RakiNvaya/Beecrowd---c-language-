#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

    double cgpa = ((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n",cgpa);

     if(cgpa>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(cgpa<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (cgpa>=5.0 && cgpa<7.0)
    {
           printf("Aluno em exame.\n");
           scanf("%lf",&e);
    printf("Nota do exame: %.1lf\n",e);

    double f=(cgpa+e)/2;
     if(f>=5)
    {
        printf("Aluno aprovado.\n");
    }
    else if(cgpa<5)
    {
        printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1lf\n",f);



    }

    return 0;


}
